// This program should read name and age
#include <iostream>
#include <string>

int main() {
  std::cout << "Please enter your given name and age:\n";

  std::string given_name = "????";
  double age = -1;

  // something like: Zuckerberg 41 or Gates 70.25
  std::cin >> given_name >> age;

  std::cout << given_name << " is " << age * 12 << " months old.\n";
}
