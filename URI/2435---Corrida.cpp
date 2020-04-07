#include <stdio.h>

int main() {
  int a, b, c, x, y, z;
  float h, q, o = 1;
  scanf("%d%d%d", &a, &b, &c);
  scanf("%d%d%d", &x, &y, &z);
  h = o * b / c;
  q = o * y / z;
  if (h < q)
    printf("%d\n", a);
  else
    printf("%d\n", x);

  return 0;
}
