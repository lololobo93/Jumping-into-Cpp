#include <iostream>
#include <string>

using namespace std;

string identifier_tens(int ten) {
  if (ten == 1) {
    /* code */
    return "ten";
  } else if (ten == 2) {
    /* code */
    return "twenty";
  } else if (ten == 3) {
    /* code */
    return "thirty";
  } else if (ten == 4) {
    /* code */
    return "forty";
  } else if (ten == 5) {
    /* code */
    return "fifty";
  } else if (ten == 6) {
    /* code */
    return "sixty";
  } else if (ten == 7) {
    /* code */
    return "seventy";
  } else if (ten == 8) {
    /* code */
    return "eighty";
  } else if (ten == 9) {
    /* code */
    return "ninety";
  }
}

string identifier_ut(int units){
  if (units == 1) {
    /* code */
    return "eleven";
  } else if (units == 2) {
    /* code */
    return "twelve";
  } else if (units == 3) {
    /* code */
    return "thirteen";
  } else if (units == 4) {
    /* code */
    return "forteen";
  } else if (units == 5) {
    /* code */
    return "fifteen";
  } else if (units == 6) {
    /* code */
    return "sixteen";
  } else if (units == 7) {
    /* code */
    return "seventeen";
  } else if (units == 8) {
    /* code */
    return "eightenn";
  } else if (units == 9) {
    /* code */
    return "nineteen";
  }
}

string identifier_units(int units){
  if (units == 1) {
    /* code */
    return "one";
  } else if (units == 2) {
    /* code */
    return "two";
  } else if (units == 3) {
    /* code */
    return "three";
  } else if (units == 4) {
    /* code */
    return "four";
  } else if (units == 5) {
    /* code */
    return "five";
  } else if (units == 6) {
    /* code */
    return "six";
  } else if (units == 7) {
    /* code */
    return "seven";
  } else if (units == 8) {
    /* code */
    return "eight";
  } else if (units == 9) {
    /* code */
    return "nine";
  }
}

int main(int argc, char const *argv[]) {
  /* code */
  int numero;
  std::cout << "Dame el número:" << '\n';
  std::cin >> numero;
  int cien = numero/100;
  int ap1 = numero - cien*100;
  int ten = ap1/10;
  int unit = ap1 - ten*10;
  if (cien > 0) {
    /* code */
    if (ten >= 2) {
      /* code */
      std::cout << identifier_units(cien) << " houndred " << identifier_tens(ten) << " " << identifier_units(unit) << '\n';
    } else {
      std::cout << identifier_units(cien) << " houndred " << identifier_ut(unit) << '\n';
    }
  } else {
    if (ten >= 2) {
      /* code */
      std::cout << identifier_tens(ten) << " " << identifier_units(unit) << '\n';
    } else {
      std::cout << identifier_ut(unit) << '\n';
    }
  }
  return 0;
}
