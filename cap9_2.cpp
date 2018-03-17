#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int secret, guess;
  secret = rand() % 100 + 1;
  for (int i = 0; i < 8; i++) {
    /* code */
    std::cout << "Dime tu guess: " << '\n';
    std::cin >> guess;
    if (guess < secret) {
      /* code */
      std::cout << "Mas grande" << '\n';
    } else if (guess > secret) {
      /* code */
      std::cout << "Más pequeño" << '\n';
    } else {
      /* code */
      std::cout << "Adivinaste!" << '\n';
      break;
    }
  }
  return 0;
}
