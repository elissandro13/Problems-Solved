#include <stdio.h>
#include <stdlib.h>

int main() {
  int x;
  for (x = 2; x <= 100; x = x + 2) {
    printf("%i\n", x);
  }

  return 0;
}
