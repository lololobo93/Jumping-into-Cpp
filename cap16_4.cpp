#include <iostream>
#include <cstdlib>
#include <ctime>

int finder(int* values, int to_find, int size) {
  /* code */
  if (size > 0) {
    if (values[size - 1] == to_find) {
      return (size - 1);
    } else {
      finder(values, to_find, size - 1);
    }
  } else {
    return -1;
  }
}

int *grow(int* values, int size) {
  int *new_values = new int[size + 1];
  for (int i = 0; i < size; i++) {
    /* code */
    new_values[i] = values[i];
  }
  delete values;
  return new_values;
}

void leer(int* array, int size) {
  /* code */
  if (size > 1) {
    /* code */
    leer(array, size - 1);
  }
  std::cout << array[size - 1] << ", ";
}


int main(int argc, char const *argv[]) {
  srand(time(NULL));
  char proof;
  int size = 5, detec, elem = 0;
  int* values = new int[size];
  std::cout << "Quieres poner un numero (y/n)" << '\n';
  std::cin >> proof;
  // cin.ignore();
  while (proof == 'y') {
    /* code */
    if (size == elem) {
      values = grow(values, size);
      size++;
    }
    values[elem] = rand() % 100 + 1;
    elem++;
    std::cout << "Otro?" << '\n';
    std::cin >> proof;
    // cin.ignore();
  }
  std::cout << "Qué valor deseas buscar: " << '\n';
  std::cin >> detec;
  // cin.ignore();
  std::cout << "Valor se encuentra en: " << finder(values, detec, size) << '\n';
  std::cout << "La secuencia es: " << '\n';
  leer(values, size);
  std::cout << '\n';
  std::cout << size << '\n';
  return 0;
}
