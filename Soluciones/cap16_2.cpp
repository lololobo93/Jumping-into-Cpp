#include <iostream>

using namespace std;

void leer(int* array, int size) {
  /* code */
  std::cout << array[size - 1] << '\n';
  if (size > 1) {
    /* code */
    leer(array, size - 1);
  }
}


int main(int argc, char const *argv[]) {
  /* code */
  int num;
  std::cout << "Numero de casillas" << '\n';
  std::cin >> num;
  int *array = new int[num];
  for (int i = 0; i < num; i++) {
    /* code */
    array[i] = i;
    std::cout << array[i] << '\n';
  }
  std::cout << '\n';

  leer(array, num);
  return 0;
}
