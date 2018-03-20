#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  double num1, num2;
  std::cout << "Dime primer valor: " << '\n';
  std::cin >> num1;
  std::cout << "Segundo valor: " << '\n';
  std::cin >> num2;
  if (&num1 > &num2) {
    std::cout << num2 << ", " << num1 << '\n';
  } else {
    std::cout << num1 << ", " << num2 << '\n';
  }
  return 0;
}
