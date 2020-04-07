#include <math.h>
#include <stdio.h>

int main() {
  int v;
  float n1, n2, n3, media, i;
  scanf("%d", &v);
  for (i = 0; i < v; i++) {
    scanf("%f%f%f", &n1, &n2, &n3);
    n1 *= 2;
    n2 *= 3;
    n3 *= 5;
    media = (n1 + n2 + n3) / 10;
    printf("%.1f\n", media);
  }
}
