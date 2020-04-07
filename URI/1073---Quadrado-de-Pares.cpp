#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, n;
  scanf("%i", &n);
  for (x = 1; x <= n; x++) {
    if (x % 2 == 0) {
      printf("%i^2=%i\n", x, x * x);
    }
  }

  return 0;
}
