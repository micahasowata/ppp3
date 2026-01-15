clean:
	@rm -rf main
compile: clean
	@clang-format -i ${FILE}.cpp && zig c++ -std=c++23 -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion -Wshadow -Wnon-virtual-dtor -Wold-style-cast -Woverloaded-virtual -Wnull-dereference -Wdouble-promotion -Wformat=2 -O2 -g -fno-omit-frame-pointer -march=native -pipe ${FILE}.cpp -o main
run: compile
	@./main
	@rm -rf main

.PHONY: clean compile run
