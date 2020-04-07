#include <stdio.h>
#include <stdlib.h>

int main() {
  int x[3], maior = 0, meio = 0, menor = 1000, i;
  scanf("%d%d%d", &x[0], &x[1], &x[2]);
  for (i = 0; i < 3; i++) {
    if (x[i] > maior)
      maior = x[i];
    if (x[i] < menor)
      menor = x[i];
  }
  if (x[0] > menor && x[0] < maior)
    meio = x[0];
  if (x[1] > menor && x[1] < maior)
    meio = x[1];
  if (x[2] > menor && x[2] < maior)
    meio = x[2];

  printf("%d\n", menor);
  printf("%d\n", meio);
  printf("%d\n", maior);
  printf("\n");
  printf("%d\n", x[0]);
  printf("%d\n", x[1]);
  printf("%d\n", x[2]);

  return 0;
}
