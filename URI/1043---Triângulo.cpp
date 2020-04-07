#include <stdio.h>

int main() {
  float a, b, c, x;
  ;
  scanf("%f%f%f", &a, &b, &c);
  if (a < b + c && b < a + c && c < a + b) {
    x = a + b + c;
    printf("Perimetro=%.1f\n", x);
  } else {
    x = c * (a + b) / 2;
    printf("Area=%.1f\n", x);
  }
  return 0;
}
