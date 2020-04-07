#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, n;
  scanf("%i", &n);
  for (x = 0; x < 10000; x++) {
    if (x % n == 2) {
      printf("%i\n", x);
    }
  }

  return 0;
}
