#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  int day;
  string final_mes;
  std::cout << "Dime que día es: " << '\n';
  std::cin >> day;
  int apoyo = day;
  if (day > 1) {
    /* code */
    final_mes = "and a Partridge in a Pear Tree.";
  } else {
    final_mes = "a Partridge in a Pear Tree.";
  }
  switch (day) {
    case 12:
      if (apoyo == day) {
        /* code */
        std::cout << "On the twelve day of Christmas my true love sent to me" << '\n';
      }
      std::cout << "Drummers Drumming" << '\n';
      day--;
    case 11:
      if (apoyo == day) {
        /* code */
        std::cout << "On the eleven day of Christmas my true love sent to me" << '\n';
      }
      std::cout << "Pipers piping" << '\n';
      day--;
    case 10:
      if (apoyo == day) {
        /* code */
        std::cout << "On the ten day of Christmas my true love sent to me" << '\n';
      }
      std::cout << "Lords a-Leaping" << '\n';
      day--;
    case 9:
      if (apoyo == day) {
        /* code */
        std::cout << "On the nine day of Christmas my true love sent to me" << '\n';
      }
      std::cout << "Ladies Dancing" << '\n';
      day--;
    case 8:
      if (apoyo == day) {
        /* code */
        std::cout << "On the eight day of Christmas my true love sent to me" << '\n';
      }
      std::cout << "Maids a-Milking" << '\n';
      day--;
    case 7:
      if (apoyo == day) {
        /* code */
        std::cout << "On the seven day of Christmas my true love sent to me" << '\n';
      }
      std::cout << "Swans a-Swimming" << '\n';
      day--;
    case 6:
      std::cout << "Geese a-Laying" << '\n';
      day--;
    case 5:
      std::cout << "Gold Rings" << '\n';
      day--;
    case 4:
      std::cout << "Calling Birds" << '\n';
      day--;
    case 3:
      std::cout << "Three French Hens" << '\n';
      day--;
    case 2:
      std::cout << "Two Turtle Doves" << '\n';
      day--;
    case 1:
      std::cout << final_mes << '\n';
      break;
    default:
      std::cout << "Error, bad input." << '\n';
      break;
  }
  return 0;
}
