#include <iostream>
#include <string>

using namespace std;

int main() {
  /* code */
  string user, pass;
  for (int i = 0; i < 2; i++) {
    /* For para revisar */
    if (i == 1) {
      /* code */
      std::cout << "Otro intento" << '\n';
    }

    std::cout << "Usuario: " << '\n';
    getline(cin, user, '\n');
    std::cout << "Contraseña: " << '\n';
    getline(cin, pass, '\n');

    if (user == "Ernesto" && pass == "Contra") {
      /* code */
      std::cout << "Access_1" << '\n';
      return 0;
    } else if (user == "Lolo" && pass == "Tres") {
      /* code */
      std::cout << "Access_2" << '\n';
      return 0;
    } else if (user == "Santi" && pass == "Dos") {
      /* code */
      std::cout << "Access_3" << '\n';
      return 0;
    }
    if (i == 1) {
      /* code */
      std::cout << "Acceso denegado" << '\n';
    }
  }
  return 0;
}
