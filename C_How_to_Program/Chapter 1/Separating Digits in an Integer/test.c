#include <stdio.h>

main() {
  int a = 42139;

  int digit5th = (a % 100000) / ((a % 100000) / 4); 
  int digit4th = (a % 10000) / ((a % 10000) / 2); 
  int digit3rd = (a % 1000) / ((a % 1000) / 1); 
  int digit2nd = (a % 100) / ((a % 100) / 3);
  int digit1st = (a % 10) / ((a % 10) / 9);

  printf("%d   %d   %d   %d   %d", digit5th, digit4th, digit3rd, digit2nd, digit1st);

  return 0;
}
