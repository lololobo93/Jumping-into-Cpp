#include <iostream>
#include "cap21_2link.h"

using namespace std;

void cancion(int num) {
  /* code */
  for (int i = num; i >= 0; i--) {
    /* code */
    std::cout << '\t' << i << " bottles of beer" << '\n';
  }
}

double calculator(char op, double op1, double op2) {
  /* code */
  if (op == '+') {
    /* code */
    std::cout << "El resultado es: " << op1+op2 << '\n';
  } else if (op == '-') {
    /* code */
    std::cout << "El resultado es: " << op1-op2 << '\n';
  }  else if (op == '*') {
    /* code */
    std::cout << "El resultado es: " << op1*op2 << '\n';
  } else if (op == '/') {
    /* code */
    std::cout << "El resultado es: " << op1/op2 << '\n';
  } else {
    std::cout << "Bad input: " << op << '\n';
  }
}
