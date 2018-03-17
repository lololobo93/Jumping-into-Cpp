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
  int tam;
  std::cout << "Cuántos elementos quieres en tu agenda?" << '\n';
  std::cin >> tam;
  cin.get();
  Datos people[tam];
  for (int i = 0; i < tam; i++) {
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
  for (int i = 0; i < tam; i++) {
    /* code */
    std::cout << people[i].name << ": " << people[i].address;
    std::cout << ", " << people[i].phone << '\n';
  }
  return 0;
}
