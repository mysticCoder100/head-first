#include <errno.h>
#include <stdio.h>
#include <unistd.h>


int main() {
  char *const my_var[] = {"JUICE=peach and apple", NULL};

  printf("Launcher: Attempting to invoke execle...\n");
  execle("./diner", "diner.exe", "4", NULL, my_var);

  return 0;
}