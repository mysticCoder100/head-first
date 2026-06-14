#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void goSouthEast(int *latitude, int *longitude);
void printString(char msg[]);
void skip(char *msg);

int main() {
  // char msg[] = "Hello, World!";
  // printString(msg);

  int age[] = {34, 23, 45, 64};

  printf("Will this work? %i.\n", 2 [age]);

  char *msg_from_amy = "Don't call me";
  skip(msg_from_amy);
  return 0;
}

void skip(char *msg) { puts(msg + 6); }

void printString(char msg[]) {
  printf("%s\n", msg);
  printf("The size of %s is %i bytes.\n", msg, strlen(msg));
}

void goSouthEast(int *latitude, int *longitude) {
  *latitude -= 1;
  *longitude += 1;
}