#include <iostream>

using namespace std;

int main() {
  /* 99 beer */
  for (int i = 99; i > 0; i--) {
    /* code */
    std::cout << "\t" << i << " bottles of beer on the wall," << '\n';
    std::cout << "\t" << i << " bottles of beer." << '\n';
    std::cout << "Take one down, pass it around, " << "\t" << i - 1
    << " bottles of beer on the wall..." << '\n';
  }
  return 0;
}
