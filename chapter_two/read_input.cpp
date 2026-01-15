// This program should read the user's first name and output a greeting
#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first name:\n";
  std::string first_name;
  std::cin >> first_name;
  std::cout << "Hello, " << first_name << "!\n";
}
