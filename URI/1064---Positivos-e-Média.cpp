#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, cont;
  float j, soma;
  soma = 0;
  cont = 0;
  for (x = 0; x < 6; x++) {
    scanf("%f", &j);
    if (j > 0) {
      cont++;
      soma += j;
    }
  }
  printf("%ivalorespositivos\n", cont);
  printf("%.1f\n", (soma / cont));

  return 0;
}
