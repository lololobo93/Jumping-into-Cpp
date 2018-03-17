#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int secret, guess = 50, mem_low = 1, mem_high = 100;
  secret = rand() % 100 + 1;
  for (int i = 1; i < 50; i++) {
    /* code */
    if (guess < secret) {
      /* code */
      mem_low = guess;
      guess = rand() % (mem_high - mem_low) + mem_high;
    } else if (guess > secret) {
      /* code */
      mem_high = guess;
      guess = rand() % (mem_high - mem_low) + mem_low;
    } else {
      /* code */
      std::cout << "Adivinó! Al intento número: " << i << '\n';
      std::cout << "Comparando: " << guess << "=" << secret << '\n';
      break;
    }
  }
  return 0;
}
