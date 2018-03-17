#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  int res = 10, fin;
  string quest;
  while (res != 0) {
    /* code */
    std::cout << "Pregunta: " << '\n';
    getline(cin, quest, '\n');
    std::cout << "Respuesta: " << '\n';
    std::cin >> res;
    cin.ignore();
    fin += res;
  }
  std::cout << "Suma: " << fin << '\n';
  return 0;
}
