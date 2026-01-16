// This program should check for repeated adjacent words
#include <iostream>
#include <string>

int main() {
  int word_count = 0;

  std::cout << "Write a sentence with some repeated words\n";
  std::string previous;
  std::string current;

  while (std::cin >> current) {
    ++word_count;
    if (previous == current) {
      std::cout << "word number " << word_count << ": " << current
                << " is repeated." << "\n";
    }

    previous = current;
  }
}
