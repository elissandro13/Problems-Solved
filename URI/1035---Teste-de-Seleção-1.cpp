#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  if (b > c && d > a && (c + d) > (b + a) && c > 0 && d > 0 && a % 2 == 0) {
    printf("Valoresaceitos\n");
  } else {
    printf("Valoresnaoaceitos\n");
  }
  return 0;
}
