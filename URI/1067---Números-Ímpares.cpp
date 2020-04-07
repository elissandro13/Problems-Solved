#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, n;
  scanf("%i", &n);
  for (x = 0; x <= n; x++) {
    if (x % 2 == 1) {
      printf("%i\n", x);
    }
  }

  return 0;
}
