#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  map<string, string> datas;
  char proof = 'y';
  int accion, iaccion, comprobacion;
  string user, password;
  while (proof == 'y') {
    std::cout << "Register user [push 1]" << '\n';
    std::cout << "Log in [push 2]" << '\n';
    std::cin >> accion;
    cin.get();
    if (accion == 1) {
      std::cout << "Nombre:" << '\n';
      getline(cin, user, '\n');
      std::cout << "Contraseña:" << '\n';
      getline(cin, password, '\n');
      datas[user] = password;
    } else if (accion == 2) {
      std::cout << "Nombre:" << '\n';
      getline(cin, user, '\n');
      std::cout << "Password:" << '\n';
      getline(cin, password, '\n');
      map<string, string>::iterator itr = datas.find(user);
      if (itr != datas.end()) {
        if (itr->second == password) {
          while (accion == 2) {
            std::cout << "Change password [push 1]" << '\n';
            std::cout << "Log out [push 2]" << '\n';
            std::cin >> iaccion;
            cin.get();
            if (iaccion == 2) {
              accion = 0;
            } else if (iaccion == 1) {
              std::cout << "New password:" << '\n';
              getline(cin, password, '\n');
              datas[user] = password;
            }
          }
        } else {
          std::cout << "Bad input" << '\n';
        }
      }
    }
  }
  return 0;
}
