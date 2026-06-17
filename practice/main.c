#include <stdio.h>

void readFile(const char *filename) {
  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    fprintf(stderr, "Error opening file\n");
    return;
  }
  char bytes[4];
  
  size_t result = fread(bytes, sizeof(char), 4, file);

  fclose(file);
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    return 2;
  }
  readFile(argv[1]);
  return 0;
}