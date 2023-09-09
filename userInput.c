#include <stdio.h>
#include <string.h>

int main() {

  char name[25]; //max size 25 bytes.
  int age;

  printf("What is your name? ");
  fgets(name, 25, stdin);       //fgets can read white spaces, unlike scanf.
  name[strlen(name)-1] = '\0';  //Get rid of the new line character.

  printf("How old are you?");
  scanf("%d", &age);

  printf("Hello %s!\n", name);
  printf("You are %d years old.\n", age);

  return 0;
}
