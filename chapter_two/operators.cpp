// This program should highlight how types determine operators and their
// operations
#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your first and last names\n";
  std::string first_name;
  std::string last_name;

  std::cin >> first_name >> last_name;

  std::string full_name = first_name + ' ' + last_name;

  std::cout << "Hello, " << full_name << '\n';
}
