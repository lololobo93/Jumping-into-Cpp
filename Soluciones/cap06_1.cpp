#include <iostream>

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
 int main(int argc, char const *argv[]) {
   /* code */
   int num;
   char op;
   double op1, op2;
   std::cout << "Cantaré una canción, dame un número entero: " << '\n';
   std::cin >> num;
   cancion(num);

   std::cout << "Ahora, haré una operación. Qué operación deseas:" << '\n';
   std::cin >> op;
   std::cout << "Primer digito:" << '\n';
   std::cin >> op1;
   std::cout << "Segundo operador:" << '\n';
   std::cin >> op2;
   calculator(op, op1, op2);
   return 0;
 }
