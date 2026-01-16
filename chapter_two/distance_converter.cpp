// This program should convert from miles to kilometers
#include <cstdlib>
#include <iostream>

int main() {
  double KILOMETERS_PER_MILE = 1.609;

  std::cout << "Enter a distance in miles:\n";
  double distance = 0.0;
  std::cin >> distance;

  if (distance <= 0) {
    std::cerr << "you must be kidding\n";
    exit(1);
  }

  std::cout << distance << " miles = " << distance * KILOMETERS_PER_MILE
            << " kilometers\n";
}
