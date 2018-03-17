#include <iostream>
#include <string>
using namespace std;

int main() {
  string selec = "";
  /* code */
  while (selec == "") {
    /* code */
    std::cout << "Selecciona: Pollo, Pavo, Codorniz, Avestruz" << '\n';
    getline(cin, selec, '\n');
    if (selec == "Pollo") {
      /* code */
      std::cout << "Servido" << '\n';
    } else if (selec == "Pavo") {
      /* code */
      std::cout << "Servido" << '\n';
    } else if (selec == "Codorniz") {
      /* code */
      std::cout << "Servido" << '\n';
    } else if (selec == "Avestruz") {
      /* code */
      std::cout << "Servido" << '\n';
    } else {
      std::cout << "Vuelve a seleccionar" << '\n';
      selec = "";
    }
  }

  return 0;
}
