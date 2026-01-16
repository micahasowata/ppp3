// This program should write a simple letter based on user input
#include <cstdlib>
#include <iostream>
#include <string>

int main() {
  std::cout << "Enter the name of the person you want to write to:\n";
  std::string first_name = "????";
  std::cin >> first_name;

  std::cout << "Enter the name of a mutual friend:\n";
  std::string friend_name = "????";
  std::cin >> friend_name;

  std::cout << "How old is the recipient?\n";
  int age = 0;
  std::cin >> age;

  if (age <= 0 || age >= 110) {
    std::cerr << "you're kidding\n";
    exit(1);
  }

  std::cout << "Dear " << first_name << ",\n\n";
  std::cout << "\tHow are you? I am fine. I miss you.\n\n";
  std::cout
      << "\tThings have been busy here lately. Work has kept me occupied, "
         "but I've been thinking about our last visit together. Remember "
         "that hilarious moment at the café when the waiter mixed up our "
         "orders? I still laugh about it.\n\n";
  std::cout << "\tHave you seen " << friend_name << " lately?\n\n";
  std::cout << "\tI hear you just had a birthday and you are " << age
            << " years old.\n\n";

  if (age < 12) {
    std::cout << "\tNext year you will be " << age + 1 << "\n\n";
  }

  if (age == 17) {
    std::cout << "\tNext year you will be able to vote\n\n";
  }

  if (age > 70) {
    std::cout << "\tAre you retired?\n\n";
  }

  std::cout << "Yours sincerely,\n\n\nMicah Asowata";
}
