#include <stdio.h>

int main() {
  char msg[10];
  int i = 0;

  while (scanf("%9s", msg) == 1) {
    i += 1;

    if (i % 2) {
      printf("%s\n", msg);
    } else {
      fprintf(stderr, "%s\n", msg);
    }
  }

  return 0;
}