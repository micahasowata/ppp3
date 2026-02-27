.DEFAULT_GOAL := run

run:
	@zig c++ -std=c++23 -Wall -Wextra -o out/main ${F}.cpp && ./out/main
.PHONY: run
