use clap::Parser;
use std::{
    fs::File,
    io::{self, BufRead, BufReader, BufWriter, Write},
    path,
};

#[derive(Parser)]
struct Cli {
    pattern: String,
    path: path::PathBuf,
}

fn main() {
    let args = Cli::parse();

    let file = File::open(&args.path);

    let file = match file {
        Ok(file) => file,
        Err(error) => panic!("error opening file {error:?}"),
    };

    let stdout = io::stdout();
    let mut out = BufWriter::new(stdout.lock());

    let reader = BufReader::new(file);

    for line in reader.lines() {
        let line = match line {
            Ok(line) => line,
            Err(err) => panic!("error reading line: {err:?}"),
        };

        if line.contains(&args.pattern) {
            writeln!(out, "{line}").expect("");
        }
    }
}
