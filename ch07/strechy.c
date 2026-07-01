#include <stdarg.h>
#include <stdio.h>

enum drink { MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE };

void print_ints(int args, ...) {
  va_list ap;
  va_start(ap, args);
  int i;

  for (i = 0; i < args; i++) {
    printf("Argument: %i\n", va_arg(ap, int));
  }
  va_end(ap);
}

double price(enum drink d) {
  switch (d) {
  case MUDSLIDE:
    return 6.79;
  case FUZZY_NAVEL:
    return 5.31;
  case MONKEY_GLAND:
    return 4.82;
  case ZOMBIE:
    return 5.89;
  }
  return 0;
}

double total(int args, ...) {
  va_list ap;
  va_start(ap, args);
  double total = 0;
  int i;

  for (i = 0; i < args; i++) {
    total += price(va_arg(ap, enum drink));
  }

  va_end(ap);
  return total;
}

int main() {
  printf("Price is %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
  return 0;
}