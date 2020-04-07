#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float delta, r1, r2, raiz_delta, a, b, c;
  scanf("%f%f%f", &a, &b, &c);
  delta = (b * b) - 4 * a * c;
  if (delta < 0 || a <= 0) {
    printf("Impossivelcalcular\n");
  } else {
    raiz_delta = sqrt(delta);
    r1 = (-1 * b + raiz_delta) / (2 * a);
    r2 = (-1 * b - raiz_delta) / (2 * a);
    printf("R1=%.5f\n", r1);
    printf("R2=%.5f\n", r2);
  }

  return 0;
}
