#include <math.h>
#include <stdio.h>

int main() {
  float x1, x2, y1, y2, y, x, d;
  scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
  x = x2 - x1;
  y = y2 - y1;
  d = sqrt((x * x) + (y * y));
  printf("%.4f\n", d);

  return 0;
}
