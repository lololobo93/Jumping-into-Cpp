#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char table[3][3];

void imprimir(char array[3][3]) {
  /* code */
  for (int i = 0; i < 3; i++) {
    /* code */
    for (int j = 0; j < 3; j++) {
      /* code */
      std::cout << array[i][j];
      if (j != 2) {
        /* code */
        std::cout << '|';
      } else {
        std::cout << '\n';
      }
    }
    if (i != 2) {
      /* code */
      std::cout << "-----" << '\n';
    }
  }
}

char winner(char array[3][3]) {
  for (int i = 0; i < 3; i++) {
    /* code */
    if (array[i][0] == array[i][1] && array[i][1] == array[i][2]) {
      /* code */
      return array[i][0];
      break;
    }
    if (array[0][i] == array[1][i] && array[1][i] == array[2][i]) {
      /* code */
      return array[0][i];
      break;
    }
  }
  if (array[0][0] == array[1][1] && array[1][1] == array[2][2]) {
    /* code */
    return array[0][0];
  } else if (array[0][2] == array[1][1] && array[1][1] == array[2][0]) {
    /* code */
    return array[2][0];
  } else {
    return '/';
  }
}

int main() {
  /* code */
  bool game = true;
  std::cout << "Tablero: " << '\n';
  for (int i = 0; i < 3; i++) {
    /* code */
    for (int j = 0; j < 3; j++) {
      /* code */
      table[i][j] = '/';
      std::cout << table[i][j];
      if (j != 2) {
        /* code */
        std::cout << '|';
      } else {
        std::cout << '\n';
      }
    }
    if (i != 2) {
      /* code */
      std::cout << "-----" << '\n';
    }
  }
  int pos1, pos2, count;
  bool comp;
  char res;
  for (int i = 0; i < 5; i++) {
    /* code */
    comp = false;
    do {
      /* code */
      std::cout << "Turno jugador uno. Dime posición. " << '\n';
      std::cin >> pos1;
      std::cin >> pos2;
      if (table[pos1][pos2] == '/') {
        table[pos1][pos2] = 'x';
        comp = true;
      } else {
        std::cout << "Posición ocupada" << '\n';
      }
    } while(comp == false);
    std::cout << "Tablero: " << '\n';
    imprimir(table);

    res = winner(table);

    if (res != '/') {
      /* code */
      break;
    }
    if (i != 4) {
      /* code */
      comp = false;
      do {
        /* code */
        std::cout << "Turno jugador dos. Dime posición. " << '\n';
        std::cin >> pos1;
        std::cin >> pos2;
        if (table[pos1][pos2] == '/') {
          table[pos1][pos2] = 'o';
          comp = true;
        } else {
          std::cout << "Posición ocupada/inválida" << '\n';
        }
      } while(comp == false);
      std::cout << "Tablero: " << '\n';
      imprimir(table);
      res = winner(table);

      if (res != '/') {
        /* code */
        break;
    }

    }
  }
  if (res != '/') {
    std::cout << "Ganador es: " << res << '\n';
  } else {
    std::cout << "Par de perdedores." << '\n';
  }
  return 0;
}
