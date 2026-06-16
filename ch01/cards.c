#include <stdio.h>
#include <stdlib.h>

void test();

int main() {
  test();
  return 0;
}

void test() {
  char cardName[3];
  puts("Enter the card name: ");
  scanf("%2s", cardName);

  int val = 0;

  switch (cardName[0]) {
  case 'K':
  case 'Q':
  case 'J':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  default:
    val = atoi(cardName);
    break;
  }

  if (val >= 3 && val <= 6) {
    printf("Count has gone up.\n");
  } else if (val == 10) {
    printf("Count has gone down.\n");
  }
}