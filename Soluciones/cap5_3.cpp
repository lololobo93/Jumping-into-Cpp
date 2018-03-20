#include <iostream>

using namespace std;

double input, fin = 0.;
int main(int argc, char const *argv[]) {
  /* code */
  do {
   /* code */
   std::cout << "Dame tu digito." << '\n';
   std::cin >> input;
   fin += input;
  } while(input != 0.);
  std::cout << "Resultado es " << '\t' << fin << '\n';
  return 0;
}
