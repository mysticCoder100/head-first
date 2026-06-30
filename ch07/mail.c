#include <stdio.h>

typedef enum { DUMP, SECOND_CHANCE, MARRIAGE } responseType;

typedef struct {
  char *name;
  responseType type;
} response;

void dump(response r) {
  printf("Dear %s,\n", r.name);
  puts("Unfortunately your last date contacted us to");
  puts("say that they will not be seeing you again");
}
void second_chance(response r) {
  printf("Dear %s,\n", r.name);
  puts("Good news: your last date has asked us to");
  puts("arrange another meeting. Please call ASAP.");
}
void marriage(response r) {
  printf("Dear %s,\n", r.name);
  puts("Congratulations! Your last date has contacted");
  puts("us with a proposal of marriage.");
}

int main() {
  response r[] = {{"Mike", DUMP},
                  {"Luis", SECOND_CHANCE},
                  {"Matt", SECOND_CHANCE},
                  {"William", MARRIAGE}};
  int i;

  void (*replies[]) (response) = {dump, second_chance, marriage};

  for (i = 0; i < 4; i++) {
      response *ir = &r[i];
      (replies[ir->type])(*ir);
    // switch (ir->type) {
    // case DUMP:
    //   dump(*ir);
    //   break;
    // case SECOND_CHANCE:
    //   second_chance(*ir);
    //   break;
    // default:
    //   marriage(*ir);
    // }
  }

  return 0;
}