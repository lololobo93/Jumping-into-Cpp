#include <iostream>

using namespace std;

int main() {
  /* Aqui se hace la calculadora */
  char oper;
  double op_1, op_2;
  std::cout << "Introduce la operacion" << '\n';
  std::cin >> oper;
  std::cout << "Introduce primer operado" << '\n';
  std::cin >> op_1;
  std::cout << "Introduce segundo operado" << '\n';
  std::cin >> op_2;

  if (oper == '+') {
    /* Suma */
    std::cout << "Suma: " << op_1+op_2 << '\n';
  } else if (oper == '-') {
    /* Resta */
    std::cout << "Resta: " << op_1-op_2 << '\n';
  } else if (oper == '*'){
    /* Multiplicacion */
    std::cout << "Multiplicación: " << op_1*op_2 << '\n';
  } else if (oper == '/'){
    /* División */
    std::cout << "División: " << op_1/op_2 << '\n';
  } else {
    /* Mal input */
    std::cout << "Entrada rechazada" << '\n';
  }
  return 0;
}
