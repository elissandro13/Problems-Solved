#include <stdio.h>
#include <stdlib.h>

int main() {
  int j, i;
  i = -2;
  for (j = 60; j >= 0; j -= 5) {
    i += 3;
    printf("I=%iJ=%i\n", i, j);
  }

  return 0;
}
