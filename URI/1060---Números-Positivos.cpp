#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, cont;
  float j;
  cont = 0;
  for (x = 0; x < 6; x++) {
    scanf("%f", &j);
    if (j > 0) {
      cont++;
    }
  }
  printf("%ivalorespositivos\n", cont);

  return 0;
}
