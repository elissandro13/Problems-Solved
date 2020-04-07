#include <stdio.h>

int main() {
  int m, s, h, t, resto;
  scanf("%d", &t);
  h = t / 3600;
  resto = t % 3600;
  m = resto / 60;
  resto = resto % 60;
  s = resto;
  printf("%d:%d:%d\n", h, m, s);
  return 0;
}
