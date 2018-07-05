#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  srand(time(NULL));
  int run_1, run_2, run_3, coin;
  std::cout << "Insert coin: " << '\n';
  std::cin >> coin;
  for (int i = 0; i < coin; i++) {
    /* code */
    run_1 = rand() % 5 + 1;
    run_2 = rand() % 5 + 1;
    run_3 = rand() % 5 + 1;
    std::cout << run_1 << " " << run_2 << " " << run_3 << " " << '\n';
    if ((run_1 + run_2 + run_3) == 9 || (run_1 + run_2 + run_3) == 12) {
      /* code */
      std::cout << "You win!!" << '\n';
    } else {
      std::cout << "You lose :(" << '\n';
    }
  }
  return 0;
}
