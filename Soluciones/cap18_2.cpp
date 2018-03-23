#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  char proof = 'y', accion;
  double value;
  vector<double> records;
  while (proof == 'y' or proof == 'Y') {
    std::cout << "Acción a realizar [v, i] :" << '\n';
    std::cin >> accion;
    cin.get();
    if (accion == 'i') {
      std::cout << "Record:" << '\n';
      std::cin >> value;
      cin.get();
      records.push_back(value);
      sort(records.begin(), records.end());
      std::cout << "continuar? [y,n]" << '\n';
      std::cin >> proof;
      cin.get();
    } else if (accion == 'v') {
      std::cout << "Tus records son:" << '\n';
      for (vector<double>::iterator itr = records.begin(), end = records.end(); itr != end; ++itr) {
        std::cout << *itr << '\n';
      }
      std::cout << "continuar? [y,n]" << '\n';
      std::cin >> proof;
      cin.get();
    } else {
      std::cout << "Bad input: vuelva a intentar" << '\n';
    }
  }
  return 0;
}
