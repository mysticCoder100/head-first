#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char content[80];

  if (argc != 6) {
    fprintf(stderr, "You need to give 5 arguments\n");
    return 1;
  }

  // A check need to be made to ensure that the file exists.
  FILE *in = fopen("files/input/spooky.csv", "r");
  FILE *file1 = fopen(argv[2], "w");
  FILE *file2 = fopen(argv[4], "w");
  FILE *file3 = fopen(argv[5], "w");

   while(fscanf(in, "%79[^\n]\n", content) == 1) {
        if (strstr(content, argv[1])) {
            fprintf(file1, "%s\n", content);
        } else if (strstr(content, argv[3])) {
            fprintf(file2, "%s\n", content);
        } else {
            fprintf(file3, "%s\n", content);
        }
    }

    fclose(in);
    fclose(file1);
    fclose(file2);
    fclose(file3);

  return 0;
}