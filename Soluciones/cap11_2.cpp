#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

double fRand(double fMin, double fMax){
  double f = (double)rand() / RAND_MAX;
  return fMin + f*(fMax - fMin);
}

struct sp_sh {
  string name;
  double x_pos;
  double y_pos;
};

sp_sh change(sp_sh nave) {
  nave.x_pos += fRand(-1., 1.);
  nave.y_pos += fRand(-1., 1.);
  return nave;
}

int main() {
  /* code */
  srand(time(NULL));
  sp_sh naves[2];
  double pos_x, pos_y;
  for (int i = 0; i < 2; i++) {
    /* code */
    std::cout << "Dame nombre de nave " << i << '\n';
    getline(cin, naves[i].name, '\n');
    naves[i].x_pos = fRand(0., 10.);
    naves[i].y_pos = fRand(0., 10.);
  }
  std::cout << "Las naves están en: " << '\n';
  for (int i = 0; i < 2; i++) {
    /* code */
    std::cout << naves[i].name << ": (" << naves[i].x_pos;
    std::cout << ", " << naves[i].y_pos << ")" << '\n';
  }
  for (int i = 0; i < 10; i++) {
    /* code */
    naves[1] = change(naves[1]);
    naves[0] = change(naves[0]);
  }
  std::cout << "Las naves ahora están en: " << '\n';
  for (int i = 0; i < 2; i++) {
    /* code */
    std::cout << naves[i].name << ": (" << naves[i].x_pos;
    std::cout << ", " << naves[i].y_pos << ")" << '\n';
  }
  return 0;
}
