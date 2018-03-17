#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void orden(int array[], int size) {
  /* code */
  int change, index;
  for (int i = 0; i < size; i++) {
    /* code */
    index = i;
    for (int j = i + 1; j < size; j++) {
      /* code */
      if (array[j] < array[index]) {
        /* code */
        index = j;
      }
    }
    change = array[index];
    array[index] = array[i];
    array[i] = change;
  }
}

bool comprobador(int array[], int size) {
  /* code */
  bool result = true;
  for (int i = 0; i < (size - 1); i++) {
    /* code */
    if (array[i] > array[i + 1]) {
      /* code */
      result = false;
      break;
    }
  }
  return result;
}

int main() {
  /* code */
  srand(time(NULL));
  int tam = rand() % 15;
  int array[tam];
  std::cout << "Arreglo previo: " << '\n';
  std::cout << "{";
  for (int i = 0; i < tam; i++) {
    /* code */
    if (i != 0) {
      /* code */
      std::cout << ", ";
    }
    array[i] = rand() % 30;
    std::cout << array[i];
  }
  std::cout << "}" << '\n';
  if (comprobador(array, tam) == false) {
    /* code */
    std::cout << "No odenado." << '\n';
    orden(array, tam);
    std::cout << "Arreglo ordenado: " << '\n';
    std::cout << "{";
    for (int i = 0; i < tam; i++) {
      /* code */
      if (i != 0) {
        /* code */
        std::cout << ", ";
      }
      std::cout << array[i];
    }
    std::cout << "}" << '\n';
  }
  std::cout << "Arreglo ya está ordenado." << '\n';
  return 0;
}
