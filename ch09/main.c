#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *now() {
  time_t t;
  time(&t);
  char *time_string = asctime(localtime(&t));

  time_string[strcspn(time_string, "\n")] = '\0';

  return time_string;
}

int main() {
  char comment[80];
  char cmd[150];

  fgets(comment, 80, stdin);
  comment[strcspn(comment, "\n")] = '\0';

  sprintf(cmd, "echo %s %s >> reports.log", comment, now());
  system(cmd);

  return 0;
}