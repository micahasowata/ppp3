// This program should
#include <iostream>

int main() {
  std::cout << "enter a number:\n";
  double d = 0;
  while (std::cin >> d) {
    int i = d;
    char c = i;
    std::cout << "d == " << d << "\ni == " << i << "\nc == (" << c << ")\n";
  }
}
