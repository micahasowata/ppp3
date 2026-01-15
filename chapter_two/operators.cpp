// This program should highlight how types determine operators and their
// operations
#include <cmath>
#include <iostream>

int main() {
  std::cout << "Please enter an integer value:\n";
  int n = 0;
  std::cin >> n;

  std::cout << "n == " << n << "\nn + 1 = " << n + 1
            << "\nthree times n = " << 3 * n << "\ntwice n = " << n * 2
            << "\nn modulo 2 = " << n % 2 << "\nhalf of n = " << n / 2
            << "\nn squared = " << n * n
            << "\nsquare root of n = " << std::sqrt(n) << "\n";
}
