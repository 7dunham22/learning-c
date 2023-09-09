#include <stdio.h>
#include <stdbool.h>

int main() {
  int x; // declaration
  x = 123; // initialization
  int y = 321; // dec + init

  int age = 32;
  float gpa = 2.05;
  char grade = 'C'; //single character, always single quotes.
  char name[] = "David"; //array of characters.

  printf("Hello %s\n", name);
  printf("You are %d years old\n", age);
  printf("Your average grade is %c\n", grade);
  printf("Your gpa is %f\n", gpa);

  float c = 3.141592; // 4 bytes (32 bits precision)
  double d = 3.141592653589793; // 8 bytes (64 bits precision)

  printf("c: %f\n", c);
  printf("d: %lf\n", d);

  bool e = true; //1 byte %d
  char f = 100; // 1 byte (-128 to 127) %d or %c
  unsigned char g = 255; //1 byte (0 to 255) %d or %c

  printf("e: %d\n", e);
  printf("f: %c\n", f);
  printf("g: %d\n", g);

  short h = 32767; //2 bytes (-32,768 to 32,767) %d
  unsigned short i = 65535; // 2 bytes (0 to 65,535) %d

  printf("h: %d\n", h);
  printf("i: %d\n", i);

  int j = 2147483647; // 4 bytes (-2,147,483,648 to 2,147,483,648) %d
  unsigned int k = 4294967295;  // 4 bytes (0 to 4,294,967,295) %u

  printf("j: %d\n", j);
  printf("k: %u\n", k);

  long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to 9 quintillion) %lld
  unsigned long long int m = 1844674407370955161; // 8 bytes (0 to 18 quintillion) %llu

  printf("l: %lld\n", l);
  printf("m: %llu\n", m);

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%-8.2f\n", item1);
  printf("Item 2: $%-8.2f\n", item2);
  printf("Item 3: $%-8.2f\n", item3);

  return 0;
}
