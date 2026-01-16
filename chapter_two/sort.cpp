// this program should sort the three numbers in ascending order
// current failure: when second is greater than both first and third
// e.g 13 99 5
#include <iostream>
int main() {
  std::cout << "enter three numbers:\n";
  int first = 0;
  int second = 0;
  int third = 0;
  std::cin >> first >> second >> third;
  int temp = 0;

  if (first < third) {
    temp = third;
    third = first;
    first = temp;
  }

  if (second < first) {
    temp = second;
    second = first;
    first = temp;

    if (third < second) {
      temp = third;
      third = second;
      second = temp;
    }
  }

  if (third < second) {
    temp = third;
    third = second;
    second = temp;
  }

  if (third < first) {
    temp = third;
    third = first;
    first = temp;
  }

  std::cout << "first: " << first << " second: " << second
            << " third: " << third << "\n";
}
