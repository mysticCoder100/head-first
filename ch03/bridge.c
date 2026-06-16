#include <stdio.h>
#include <string.h>

int main() {
    char content[80];

    FILE *in = fopen("files/input/spooky.csv", "r");
    FILE *file1 = fopen("files/output/ufos.csv", "w");
    FILE *file2 = fopen("files/output/disappearances.csv", "w"); 
    FILE *file3 = fopen("files/output/others.csv", "w");

    while(fscanf(in, "%79[^\n]\n", content) == 1) {
        if (strstr(content, "UFO")) {
            fprintf(file1, "%s\n", content);
        } else if (strstr(content, "Disappearance")) {
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