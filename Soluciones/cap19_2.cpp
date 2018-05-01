#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string not_part = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ1234567890 ";

void finder(string str) {
  int i = 0;
  vector<char> vec;
  for (i = str.find_first_not_of(not_part, 0); i != string::npos; i = str.find_first_not_of(not_part, i)) {
    if (find(vec.begin(), vec.end(), str[i]) == vec.end()) {
      cout << str[i];
    }
    vec.push_back(str[i]);
    i++;
  }
  cout << '\n';
}

void printer(string str, char sp) {
  std::cout << "Tu linea es:" << '\n';
  std::cout << str << '\n';
  cout << "Tu línea separada es: " << '\n';
  int i = 0, j = 0;
  for (i = str.find(sp, 0); i != string::npos; i = str.find(sp, i)) {
    cout << str.substr(j, i) << '\n';
    j = i + 1;
    i++;
  }
  cout << str.substr(j, str.length()-1) << '\n';
}

int main(int argc, char const *argv[]) {
  char proof = 'y';
  string to_save;
  char sep;
  bool search = true;
  vector<char> vec;
  while (proof == 'Y' || proof == 'y') {
    std::cout << "Dime tu entrada: " << '\n';
    getline(cin, to_save, '\n');
    while (search == true) {
      cout << "Selecciona el carácter que deseas: ";
      finder(to_save);
      cin >> sep;
      cin.ignore();
      search = false;
    }
    printer(to_save, sep);
    cout << "Vas a introducir otra línea? [y/n]" << '\n';
    cin >> proof;
    cin.ignore();
  }
  return 0;
}
