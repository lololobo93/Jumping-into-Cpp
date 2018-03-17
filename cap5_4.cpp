#include <iostream>
#include <stdlib.h>

using namespace std;

int secret, guess, i = 0, count = 10;

int main(int argc, char const *argv[]) {
  /* code */
  secret = rand() % 100 + 1;
  while (i < count) {
    /* code */
    std::cout << "Adivina numero entre 100 y 1: " << '\n';
    std::cin >> guess;
    if (guess == secret) {
      /* code */
      std::cout << "Muy bien" << '\n';
      break;
    } else if (guess < secret) {
      /* code */
      std::cout << "Mas grande." << '\n';
    } else {
      std::cout << "Mas pequeño." << '\n';
    }
    i++;
  }
  if (i == count) {
    /* code */
    std::cout << "El numero es " << secret << '\n';
  }
  return 0;
}
