use clap::Parser;
use std::path;

#[derive(Parser)]
struct Cli {
    pattern: String,
    path: path::PathBuf,
}

fn main() {
    let args = Cli::parse();

    println!("pattern {:?}, path: {:?}", args.pattern, args.path);
}
