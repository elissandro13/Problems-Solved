#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, n;
  scanf("%i", &n);
  for (x = n; x <= n + 12; x++) {
    if (x % 2 == 1) {
      printf("%i\n", x);
    }
  }

  return 0;
}
