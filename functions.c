#include "functions.h"

/* REMOVE THIS COMMENT, then write your implementations of the functions in
 * this source file. 
 * Skeleton versions of the functions already appear below.
 */

int classify_triangle(int side1, int side2, int side3) {

  if((side1 < 0 || side2 < 0 || side3 < 0) || (side1 + side2 <= side3) || (side2 + side3 <= side1  ) || (side1 + side3 <= side2)){

    return -1;

  } else if(side1 == side2 && side1 == side3 && side2 == side3){

      return 3;

  } else if(side1 != side2 && side2 != side3 && side1 != side3){

    return 0;

  } else if((side1 == side2 && side3 != side1) || (side1 == side3 && side2 != side3) || (side2 == side3 && side1 != side2)){

      return 2;

  } else {

    return 1;

  }

}

long reverse_digits(long n) {
  
  long reversed = 0;
  long nCopy = n;
  int remainder = 0;
  int multiplier = 1;
  int numDigits = 0;

  if(n == 0) return 0;

  if(n < 0 || n % 10 == 0) return -1;

  while(nCopy != 0) {

    numDigits++;
    nCopy /= 10;

  }

  while(numDigits != 1) {

    multiplier *= 10;
    numDigits--;

  }

  while(n != 0){

    remainder = n % 10;
    reversed += multiplier * remainder;

    multiplier /= 10;

    n /= 10;

  }

  return reversed;

}

unsigned long catalan(short int n) {
  
  if(n == 0) return 1;

  return (2 * ((2 * n) - 1) * catalan(n - 1)) / (n + 1);

}
