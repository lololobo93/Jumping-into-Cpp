#include <iostream>

using namespace std;

double mult_add(double *arg1, double *arg2) {
  /* code */
  double apoyo = *arg2;
  *arg2 = *arg1 + *arg2;
  return *arg1 * apoyo;
}

double mult_add_ref(double &arg1, double &arg2) {
  /* code */
  double apoyo = arg2;
  arg2 = arg1 + arg2;
  return arg1 * apoyo;
}

int main() {
  /* code */
  double  arg1 = 15.2, arg2 = 23.3, res;
  res = mult_add(&arg1, &arg2);
  std::cout << "Mult: " << res << " Suma: " << arg2 << '\n';
  double &ref1 = arg1, &ref2 = arg2;
  res = mult_add_ref(ref1, ref2);
  std::cout << "Mult: " << res << " Suma: " << arg2 << '\n';
  return 0;
}
