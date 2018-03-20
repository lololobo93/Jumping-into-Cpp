#include <iostream>

using namespace std;

double power(double x, int y) {
  /* code */
  if (y == 0) {
    /* code */
    return 1;
  }
  return x*power(x, y-1);
}

int main() {
  /* code */
  double x;
  int y;
  std::cout << "Dime qué quieres potencia quieres:" << '\n';
  std::cin >> x;
  std::cin >> y;
  std::cout << power(x, y) << '\n';
  return 0;
}
