#include <iostream>
#include <string>

using namespace std;

string mi_nombre, to_print;

int main(){
  cout << "Dime tu nombre\n";
  getline(cin, mi_nombre, '\n');
  to_print = "Tu nombre es " + mi_nombre + ".\n";
  cout << to_print;
  cin.get();
  return 0;
}
