#include <iostream>
#include <string>

using namespace std;

struct Datos {
  string name;
  string address;
  string phone;
};

int main() {
  /* code */
  Datos people [2];
  for (int i = 0; i < 2; i++) {
    /* code */
    std::cout << "Dame los datos de persona " << i << '\n';
    std::cout << "Nombre: " << '\n';
    getline(cin, people[i].name, '\n');
    std::cout << "Dirección: " << '\n';
    getline(cin, people[i].address, '\n');
    std::cout << "Teléfono: " << '\n';
    getline(cin, people[i].phone, '\n');
  }
  std::cout << "La agenda es: " << '\n';
  for (int i = 0; i < 2; i++) {
    /* code */
    std::cout << people[i].name << ": " << people[i].address;
    std::cout << ", " << people[i].phone << '\n';
  }
  return 0;
}
