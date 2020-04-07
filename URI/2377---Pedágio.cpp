#include <stdio.h>

int main() {
  int c, p, cp, cc, tx, t2, t3;
  scanf("%d%d", &c, &p);
  scanf("%d%d", &cc, &cp);
  tx = c * cc;
  t2 = (c / p) * cp;
  t3 = tx + t2;
  printf("%i\n", t3);

  return 0;
}
