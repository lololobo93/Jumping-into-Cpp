#include <iostream>
#include <string>

using namespace std;

int main() {
  int age_1, age_2;
  string user_1 = "So", user_2 = "So2";
  /* Toma dos edades */
  cout << "Nombre primer usuario: " << '\n';
  getline(cin, user_1, '\n');
  cout << "introduce primer edad: " << '\n';
  cin >> age_1;
  cin.ignore();
  cout << "Nombre segundo usuario: " << '\n';
  getline(cin, user_2, '\n');
  cout << "introduce segunda edad: " << '\n';
  cin >> age_2;
  cin.ignore();

  if (age_1 > 100 && age_2 > 100)
  {
    /* Edades mayores a 100 */
    cout << "Todavia viven?" << '\n';
  }
  else if (age_1 > age_2)
  {
    /* Comparacion edades */
    cout << user_1 << " es mayor que " << user_2 << '\n';
  }
  else if (age_2 > age_1)
  {
    /* code */
    cout << user_2 << " es mayor que " << user_1 << '\n';
  }
  else
  {
    cout << "Ambos usuarios son de la misma edad" << '\n';
  }
  return 0;
}
