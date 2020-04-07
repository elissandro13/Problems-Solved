#include <stdio.h>

int main() {
  int a, b;
  scanf("%i%i", &a, &b);
  if (b % a == 0 || a % b == 0) {
    printf("SaoMultiplos\n");
  } else {
    printf("NaosaoMultiplos\n");
  }
  return 0;
}
