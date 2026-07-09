#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *now() {
  time_t t;
  time(&t);
  return asctime(localtime(&t));
}

int main() {
  char comment[80];
  char cmd[120];

  printf("Enter a comment: ");
  fgets(comment, 80, stdin);

  comment[strcspn(comment, "\n")] = '\0';
  char *lTime = now();
  lTime[strcspn(lTime, "\n")] = '\0';

  sprintf(cmd, "echo %s %s >> ./log.txt", comment, lTime);
  system(cmd);
  return 0;
}