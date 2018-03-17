#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

double fRand(double fMin, double fMax){
  double f = (double)rand() / RAND_MAX;
  return fMin + f*(fMax - fMin);
}

int main() {
  srand(time(NULL));
  double array[10];
  std::cout << "Arreglo es: " << '\n';
  std::cout << "{";
  for (int i = 0; i < 10; i++) {
    /* code */
    if (i != 0) {
      /* code */
      std::cout << ", ";
    }
    array[i] = fRand(0, 10);
    std::cout << array[i];
  }
  std::cout << "}" << '\n';
  int index_min = 0, index_max = 0;
  double avg = 0;
  for (int i = 1; i < 10; i++) {
    /* code */
    if (array[index_max] < array[i]) {
      /* code */
      index_max = i;
    }
    if (array[index_min] > array[i]) {
      /* code */
      index_min = i;
    }
    avg += array[i]/10.;
  }
  std::cout << "Valor máximo: " << array[index_max] << '\n';
  std::cout << "Valor mínimo: " << array[index_min] << '\n';
  std::cout << "Promedio: " << avg << '\n';
  return 0;
}
