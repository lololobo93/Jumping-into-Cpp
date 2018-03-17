#include <iostream>

using namespace std;

int main() {
  /* Revisa contraseña */
  double pass;
  std::cout << "Dame tu contraseña: " << '\n';
  std::cin >> pass;
  if (pass == 25 || pass == 250893) {
    /* Revisa contraseña */
    std::cout << "Tienes acceso." << '\n';
  } else {
    std::cout << "No acceso" << '\n';
  }
  return 0;
}
