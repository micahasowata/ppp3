// This program should check for repeated adjacent words
#include <iostream>
#include <string>

int main() {
  std::cout << "Write a sentence with some repeated words\n";
  std::string previous;
  std::string current;

  while (std::cin >> current) {
    if (previous == current) {
      std::cout << "Repeated word: " << current << "\n";
    }

    previous = current;
  }
}
