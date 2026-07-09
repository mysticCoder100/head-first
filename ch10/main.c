#include <stdio.h>
#include <unistd.h>

int main() {
  FILE *myFile = fopen("../ch06/input/data.txt", "r");

  int descriptor = fileno(myFile);

  printf("File descriptor: %d\n", descriptor);
  
//   dup2(descriptor, 1); // Duplicate the file descriptor to stdout

  printf("File descriptor: %d\n", descriptor);

//   char buffer[80];

//   while (fgets(buffer, 80, myFile) != NULL) {
//     printf("%s", buffer);
//   }

//   fclose(myFile);

  return 0;
}