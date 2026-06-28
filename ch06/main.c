#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(island *start) {
  island *i = start;

  for (; i != NULL; i = i->next) {
    printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
  }
}

int main() {

  island *start = NULL;
  island *i = NULL;
  island *next = NULL;
  char name[80];

  for (; fgets(name, 80, stdin) != NULL; i = next) {
    next = create(name);

    if (start == NULL) {
      start = next;
    }

    if (i != NULL) {
      i->next = next;
    }
  }

  display(start);
  release(start);

  // printf("Island Name:");
  // fgets(name, 80, stdin);
  // island *islandOne = create(name);
  // fgets(name, 80, stdin);
  // island *islandTwo = create(name);

  // islandOne->next = islandTwo;

  // display(islandOne);
  return 0;
}

void release(island *start) {
  island *i = start;
  island *next = NULL;

  for (; i != NULL; i = next) {
    next = i->next;
    free(i->name);
    free(i);
  }
}

island *create(char *name) {
  island *i = malloc(sizeof(island));
  i->name = strdup(name);
  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;

  return i;
}

void perform() {

  char *names[4];

  names[0] = "Alice";
  names[1] = "Bob";
  names[2] = "Charlie";
  names[3] = "Eve";

  printList(names, 4);

  char *newName = "David";
  char *beforeName = "Bob";

  for (int i = 0; i < 4; i++) {
    if (names[i] == beforeName) {
      char *temp = names[i + 1];
      names[i + 1] = newName;
      names[i + 2] = temp;
      break;
    }
  }

  printList(names, 4);
}

void printList(char *list[], int size) {
  for (int i = 0; i < size; i++) {
    printf("Name %d: %s\n", i + 1, list[i]);
  }
}

void store() {
  island amity = {"Amity", "09:00", "17:00", NULL};
  island craggy = {"Craggy", "09:00", "17:00", NULL};
  island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
  island shutter = {"Shutter", "09:00", "17:00", NULL};

  amity.next = &craggy;
  craggy.next = &isla_nublar;
  isla_nublar.next = &shutter;

  island skull = {"Skull", "09:00", "17:00", NULL};

  isla_nublar.next = &skull;
  skull.next = &shutter;

  // display(&amity);
}