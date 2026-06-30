#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *scoreA, const void *scoreB);
int compare_desc(const void *scoreA, const void *scoreB);

int compare_areas(const void *recA, const void *recB);
int compare_areas_desc(const void *recA, const void *recB);

int compare_names(const void *nameA, const void *nameB);
int compare_names_desc(const void *nameA, const void *nameB);

float getArea(const int width, const int height);

typedef struct {
  int width;
  int height;
} rectangle;

int main() {
  const int count = 7;
  int scores[] = {543, 323, 32, 554, 11, 3, 112};

  rectangle rects[] = {{.width = 10, .height = 20}, {.width = 15, .height = 30},
                       {.width = 5, .height = 5},   {.width = 40, .height = 50},
                       {.width = 12, .height = 18}, {.width = 25, .height = 25},
                       {.width = 30, .height = 15}};

  char *names[] = {"Sayo", "Ade", "John", "Bayo", "Tolu", "Segun", "Ope"};

    printf("[");
    for (size_t i = 0; i < count; i++) {
      rectangle *ptr = &rects[i];
      printf("{Width: %i, Height: %i}, ", ptr->width, ptr->height);
    }
    printf("]");

    // for (size_t i = 0; i < count; i++) {
    //   printf("%i, ", scores[i]);
    // }

    // for (size_t i = 0; i < count; i++) {
    //   printf("%s, ", names[i]);
    // }
  printf("\n");

  qsort(rects, count, sizeof(rectangle), compare_areas_desc);

  //   for (size_t i = 0; i < count; i++) {
  //     printf("%i, ", scores[i]);
  //   }

    //   for (size_t i = 0; i < count; i++) {
    //   printf("%s, ", names[i]);
    // }

    printf("[");
    for (size_t i = 0; i < count; i++) {
      rectangle *ptr = &rects[i];
      printf("{Width: %i, Height: %i}, ", ptr->width, ptr->height);
    }
    printf("]");
  printf("\n");

  return 0;
}

int compare(const void *scoreA, const void *scoreB) {
  int a = *(int *)scoreA;
  int b = *(int *)scoreB;
  return a - b;
}

int compare_desc(const void *scoreA, const void *scoreB) {
  int a = *(int *)scoreA;
  int b = *(int *)scoreB;
  return b - a;
}

int compare_areas(const void *recA, const void *recB) {
  rectangle* a = (rectangle *)recA;
  rectangle* b = (rectangle *)recB;
  return getArea(a->width, a->height) - getArea(b->width, b->height);
}
int compare_areas_desc(const void *recA, const void *recB) {
  rectangle* a = (rectangle *)recA;
  rectangle* b = (rectangle *)recB;
  return getArea(b->width, b->height) - getArea(a->width, a->height);
}

int compare_names(const void *nameA, const void *nameB) {
  char *a = *(char **)nameA;
  char *b = *(char **)nameB;
  return strcmp(a, b);
}

int compare_names_desc(const void *nameA, const void *nameB) {
  char *a = *(char **)nameA;
  char *b = *(char **)nameB;
  return strcmp(b, a);
}

float getArea(const int width, const int height) { return width * height; }