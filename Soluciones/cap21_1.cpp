#include <iostream>
#include "cap21_2link.h"

using namespace std;

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
