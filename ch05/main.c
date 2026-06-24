#include "./main.h"
#include <stdio.h>

int main() {
  //   struct exercise exr = {

  //   };
  //   struct meal tneal = {

  //   };
  //   struct preferences care = {

  //   };

  struct fish *f = {"MyFish", "Goldfish", 32, 5};

  typedef enum { red, green, blue, yellow, orange, purple } color;
  color newColor = red;
  //   catalog(f);
  //   label(f);

  return 0;
}

struct fish promptForFish() {
  char name[80];
  char species[80];
  int age;
  int teeth;

  printf("What is the name of your fish? ");
  fgets(name, 80, stdin);
  printf("What is the species of your fish? ");
  fgets(species, 80, stdin);
  printf("What is the age of your fish? ");
  scanf("%d", &age);
  printf("How many teeth does your fish have? ");
  scanf("%d", &teeth);

  struct fish f = {
      .name = name, .species = species, .age = age, .teeth = teeth};
  return f;
}

void catalog(struct fish f) {
  printf("%s is a %s with %i teeth.He is %i\n", f.name, f.species, f.teeth,
         f.age);
}

void label(struct fish f) {
  printf("Name: %s\nSpecies: %s\n%i years old, %i teeth\n", f.name, f.species,
         f.age, f.teeth);
}