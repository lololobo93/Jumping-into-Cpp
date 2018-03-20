#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
  /* code */
  int size;
  std::cout << "Dime de que tamaño será la tabla: " << '\n';
  std::cin >> size;
  int **p_p_table;
  p_p_table = new int*[size + 2];
  for (int i = 0; i < (size + 2); i++) {
    /* code */
    p_p_table[i] = new int[size + 2];
  }
  for (int i = 1; i < (size + 2); i++) {
    /* code */
    p_p_table[0][i] = (i-1);
    p_p_table[i][0] = (i-1);
    for (int j = 1; j < (size + 2); j++) {
      /* code */
      p_p_table[i][j] = (i-1)*(j-1);
    }
  }
  for (int i = 0; i < (size + 2); i++) {
    /* code */
    for (int j = 0; j < (size + 2); j++) {
      /* code */
      if (i == 0 && j == 0) {
        /* code */
        std::cout << " x ";
      } else {
        std::cout << " " << &p_p_table[i][j] << " ";
      }
    }
    std::cout << '\n';
  }
  return 0;
}
