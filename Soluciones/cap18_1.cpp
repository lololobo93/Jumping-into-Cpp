#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<string, string> book) {
  for (map<string, string>::iterator itr = book.begin(), end = book.end(); itr != end; ++itr) {
    std::cout << itr->first << " --> " << itr->second << '\n';
  }
}

int main(int argc, char const *argv[]) {
  map<string, string> add_map;
  string key_er, value_er;
  char proof = 'y', oper;
  while (proof == 'y' or proof=='Y') {
    std::cout << "Operación a realizar: [i, c, r]:" << '\n';
    std::cin >> oper;
    cin.get();
    if (oper == 'i') {
      std::cout << "Nombre: " << '\n';
      getline(cin, key_er, '\n');
      std::cout << "Teléfono" << '\n';
      getline(cin, value_er, '\n');
      add_map[key_er] = value_er;
    } else if (oper == 'c') {
      std::cout << "Nombre: " << '\n';
      getline(cin, key_er, '\n');
      std::cout << "Teléfono" << '\n';
      getline(cin, value_er, '\n');
      add_map[key_er] = value_er;
    } else if (oper == 'r') {
      std::cout << "Nombre: " << '\n';
      getline(cin, key_er, '\n');
      add_map.erase(key_er);
    } else {
      std::cout << "Entrada errónea. Tu lista es:" << '\n';
      display(add_map);
    }
    std::cout << "Algo más: [y/n]" << '\n';
    std::cin >> proof;
    cin.get();
  }
  return 0;
}
