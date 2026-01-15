// This program should highlight how types determine the meaning of operators
#include <iostream>
#include <string>

int main() {
  int age = -1;
  std::cin >> age;

  std::string name;
  std::cin >> name;

  int a2 = age + 2;

  std::string n2 = name + " Jr.";

  int a3 = age - 2;

  std::string n3 = name - " Jr.";
}
