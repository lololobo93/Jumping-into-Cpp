#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string needle, haystack;

  std::cout << "Dame needle:" << '\n';
  getline(cin, needle, '\n');
  std::cout << "Dame haystack:" << '\n';
  getline(cin, haystack, '\n');

  int i = 0;
  int count = 0;
  for (i = haystack.find(needle, 0); i != string::npos; i = haystack.find(needle, i)) {
    count++;
    i++;
  }

  std::cout << "Número de veces que "<< needle << '\n';
  std::cout << "aparece en " << haystack << ": " << '\n';
  std::cout << count << '\n';

  return 0;
}
