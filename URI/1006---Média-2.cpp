#include <stdio.h>

int main() {
  float a, b, media, c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  a = a * 2;
  b = b * 3;
  c = c * 5;
  media = (a + b + c) / 10;
  printf("MEDIA=%.1f\n", media);
  return 0;
}
