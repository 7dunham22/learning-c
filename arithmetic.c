#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;

  // float z = x / y; // Without storing the values as floats, we get floor division, even when casting to float. Ans => 2.000000
  float quotient = x / (float) y; // => 2.500000

  printf("quotient: %f\n", quotient);

  int remainder = x % y;
  printf("remainder: %d\n", remainder);

  x++;
  printf("x incremented: %d\n", x);

  x = 10;
  x+=1;
  x-=3;
  printf("Augmented x: %d\n", x);

  return 0;
}
