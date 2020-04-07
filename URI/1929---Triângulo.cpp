#include <stdio.h>
#include <stdlib.h>

int formaTriangulo(int a, int b, int c);
int main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  if (formaTriangulo(a, b, c) || formaTriangulo(a, b, d) ||
      formaTriangulo(c, b, d) || formaTriangulo(a, c, d)) {
    printf("S\n");
  } else {
    printf("N\n");
  }
  return 0;
}
int formaTriangulo(int a, int b, int c) {
  return a < b + c && b < c + a && c < a + b;
}
