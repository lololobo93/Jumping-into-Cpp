#include <iostream>
#include <ctime>
#include <cstdlib>
#include "cap21_3link.h"

int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int key, i = 0, num = (rand() % 100 + 1);
  node* binary = new node;
  while (i < num) {
    key = rand() % 200 + 1;
    if (search(binary, key) == NULL) {
      if (i == 0) {
        binary->key_value = key;
        i++;
      } else {
        insert(binary, key);
        i++;
      }
    }
  }
  proof_balan(binary);
  return 0;
}
