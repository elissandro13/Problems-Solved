#include <stdio.h>
#include <stdlib.h>

int formaTriangulo(int a, int b, int c);
int main() {
  int gasto, gasto_t;
  scanf("%d", &gasto);
  gasto_t = 7;
  if (gasto <= 10) {
    printf("%d\n", gasto_t);
  } else if (gasto <= 30) {
    printf("%d\n", gasto_t + (gasto - 10));
  } else if (gasto <= 100) {
    printf("%d\n", gasto_t + 20 + ((gasto - 30) * 2));
  } else {
    printf("%d\n", gasto_t + 20 + 140 + ((gasto - 100) * 5));
  }
  return 0;
}
