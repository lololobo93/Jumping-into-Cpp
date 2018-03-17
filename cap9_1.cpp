#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  int flip, count_cara = 0, count_cruz = 0;
  srand( time(NULL) );
  for (int i = 0; i < 1000; i++) {
    /* code */
    flip = rand() % 2 + 1;
    if (flip == 1) {
      /* code */
      count_cara++;
    } else {
      count_cruz++;
    }
  }
  std::cout << count_cara << '\n';
  std::cout << count_cruz << '\n';
  return 0;
}
