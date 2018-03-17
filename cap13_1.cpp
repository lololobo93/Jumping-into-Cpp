#include <iostream>
#include <string>

using namespace std;

void namer( string *name, string *last) {
  std::cout << "Dime tu nombre: " << '\n';
  getline(cin, *name, '\n');
  std::cout << "Y tu apellido: " << '\n';
  getline(cin, *last, '\n');
}

void namer_ref( string &name, string &last) {
  std::cout << "Dime tu nombre: " << '\n';
  getline(cin, name, '\n');
  std::cout << "Y tu apellido: " << '\n';
  getline(cin, last, '\n');
}

int main() {
  /* code */
  string p_name, p_last;
  namer(&p_name, &p_last);
  std::cout << "Tu nombre es " << p_name << " y lo guarde en " << &p_name << '\n';
  std::cout << "Tu apellido es " << p_last << " y lo guarde en " << &p_last << '\n';
  string &ref1 = p_name, &ref2 = p_last;
  namer_ref(ref1, ref2);
  std::cout << "Tu nombre es " << p_name << " y lo guarde en " << &p_name << '\n';
  std::cout << "Tu apellido es " << p_last << " y lo guarde en " << &p_last << '\n';
  return 0;
}
