#include <iostream>

using namespace std;

// char checkResult()
// {
//
//     int i,j,k,count;
//
//
//     //checks horizontal win
//     for(i=0;i<width;i++)
//         for(j=0;j<height-3;j++)
//             if(p_p_connect[i][j] != 0 && p_p_connect[i][j]==p_p_connect[i][j+1] && p_p_connect[i][j]==p_p_connect[i][j+2] && board[i][j]==board[i][j+3])
//                 return 'n';
//                 //return 1;
//
//     //checks vertical win
//     for(i=0;i<sizeWidth-3;i++)
//         for(j=0;j<sizeHeight;j++)
//             if(board[i][j] != 0 && board[i][j]==board[i+1][j] && board[i][j]==board[i+2][j] && board[i][j]==board[i+3][j])
//                 return 'n';
//                 //return 2;
//
//     //checks rigth diagonal win
//     for(i=0;i<sizeWidth-3;i++)
//         for(j=0;j<sizeHeight-3;j++)
//             if(board[i][j] != 0 && board[i][j]==board[i+1][j+1] && board[i][j]==board[i+2][j+2] && board[i][j]==board[i+3][j+3])
//                 return 'n';
//
//     //checks left diagonal win
//     for(i=0;i<sizeWidth-3;i++)
//         for(j=0;j<sizeHeight-3;j++)
//             if(board[i][j] != 0 && board[i][j]==board[i+1][j-1] && board[i][j]==board[i+2][j-2] && board[i][j]==board[i+3][j-3])
//                 return 'n';
//
//     return 'y';
// }


int main(int argc, char const *argv[]) {
  /* code */
  char **p_p_connect;
  int height, width, count = 1;
  char game = 'y';
  int pos1;
  do {
    /* code */

    if (count != 1) {
      /* code */
      for (int i = 0; i < height; i++) {
        /* code */
        delete[] p_p_connect[i];
      }
      delete[] p_p_connect;
    }

    std::cout << "Dime altura: " << '\n';
    std::cin >> height;
    cin.get();
    std::cout << "Dime ancho: " << '\n';
    std::cin >> width;
    cin.get();
    p_p_connect = new char*[height];

    for (int i = 0; i < height; i++) {
      /* code */
      p_p_connect[i] = new char[width];
    }
    for (int i = 0; i < height; i++) {
      /* code */
      for (int j = 0; j < width; j++) {
        /* code */
        p_p_connect[i][j] = '-';
      }
    }

    std::cout << "Tablero: " << '\n';
    for (int i = 0; i < height; i++) {
      /* code */
      for (int j = 0; j < width; j++) {
        /* code */
        std::cout << " " << p_p_connect[i][j] << " ";
      }
      std::cout << '\n';
    }

    int move = 0;

    while (game == 'y' || game == 'Y') {
      /* code */
      std::cout << "Mueve jugador 1: " << '\n';
      std::cin >> pos1;
      cin.get();
      for (int j = 0; j < height; j++) {
        /* code */
        if (p_p_connect[height - 1 - j][pos1] == '-') {
          /* code */
          p_p_connect[height - 1 - j][pos1] = 'x';
          break;
        }
      }
      std::cout << "Tablero: " << '\n';
      for (int k = 0; k < height; k++) {
        /* code */
        for (int j = 0; j < width; j++) {
          /* code */
          std::cout << " " << p_p_connect[k][j] << " ";
        }
        std::cout << '\n';
      }

      move += 1;
      if (move >= height*width) {
        /* code */
        game = 'n';
        break;
      }

      std::cout << "Mueve jugador 2: " << '\n';
      std::cin >> pos1;
      cin.get();
      for (int j = 0; j < height; j++) {
        /* code */
        if (p_p_connect[height - 1 - j][pos1] == '-') {
          /* code */
          p_p_connect[height - 1 - j][pos1] = 'o';
          break;
        }
      }
      std::cout << "Tablero: " << '\n';
      for (int k = 0; k < height; k++) {
        /* code */
        for (int j = 0; j < width; j++) {
          /* code */
          std::cout << " " << p_p_connect[k][j] << " ";
        }
        std::cout << '\n';
      }
      move += 1;
      if (move >= height*width) {
        /* code */
        game = 'n';
        break;
      }
    }
    std::cout << "New game? (y/n): " << '\n';
    std::cin >> game;
    cin.get();
  } while(game == 'y' || game == 'Y');
  return 0;
}
