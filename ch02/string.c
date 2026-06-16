#include <stdio.h>
#include <string.h>

void musicTracks(char searchFor[]) {
  char tracks[][80] = {"Bohemian Rhapsody", "Stairway to Heaven",
                       "Hotel California", "Sweet Child O' Mine"};

  for (int i = 0; i < 4; i++) {
    if (strstr(tracks[i], searchFor))
      printf("Track %i, '%s'\n", i + 1, tracks[i]);
  }
}

void reverseString(char *s) {
  size_t len = strlen(s);

  char *t = s + len - 1;

  while (t >= s) {
    printf("%c", *t);
    t--;
  }
  puts("");
}

int main() {
  //   char searchFor[80];
  //   printf("Enter a search term: ");
  //   fgets(searchFor, 80, stdin);
  //   scanf("%79s", searchFor);
  //   musicTracks(searchFor);
  reverseString("Hello, World!");
  return 0;
}