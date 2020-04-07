#include <stdio.h>

int main() {
  int a, b, c, aux;
  scanf("%d%d%d", &a, &b, &c);
  if (b > a && b > c) {
    aux = a;
    a = b;
    b = aux;
  } else if (c > a) {
    aux = a;
    a = c;
    c = aux;
  }
  if (a >= b + c) {
    printf("n\n");

  }

  else {
    if (a * a == b * b + c * c) {
      printf("r\n");
    }
    if (a * a > b * b + c * c) {
      printf("o\n");
    }
    if (a * a < b * b + c * c) {
      printf("a\n");
    }
  }

  return 0;
}
