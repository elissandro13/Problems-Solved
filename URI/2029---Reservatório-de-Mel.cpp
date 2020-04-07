#include <stdio.h>
#include <stdlib.h>

int main() {
  float v, d, pi, h, a, r, cic;
  pi = 3.14;
  while (scanf("%f%f", &v, &d) != EOF) {
    r = d / 2.0;
    cic = pi * (r * r);
    a = cic;
    h = v / cic;
    printf("ALTURA=%.2f\n", h);
    printf("AREA=%.2f\n", a);
  }
  return 0;
}
