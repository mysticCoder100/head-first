#include <stdio.h>

int main() {

  struct exercise {
    const char *description;
    float duration;
  };
  struct meal {
    const char *ingredients;
    float weight;
  };
  struct preferences {
    struct meal food;
    struct exercise exercise;
  };
  struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
  };
  struct exercise exr = {

  };
  struct meal tneal = {

  };
  struct preferences care = {

  };

  return 0;
}