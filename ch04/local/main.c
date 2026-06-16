#include <stdio.h>
#include "totaller.h"

float total = 0.0;
short count = 0;
short taxPercent = 6;

int main() {
  float val;
  printf("Price of item: ");

  while (scanf("%f", &val) == 1) {
    printf("Total so far: %.2f\n", withTax(val));
    printf("Price of item: ");
  }
  printf("\nFinal total: %.2f\n", total);
  printf("Number of items: %hi\n", count);
  return 0;
}


float withTax(float f) {
  float taxRate = 1 + (taxPercent / 100.0);
  total += (f * taxRate);
  count++;
  return total;
}