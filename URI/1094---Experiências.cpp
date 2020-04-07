#include <stdio.h>
#include <stdlib.h>

int formaTriangulo(int a, int b, int c);
int main() {
  int n, ratos, sapos, coelhos, total = 0, r = 0, s = 0, c = 0, i = 0, num = 0;
  char tipo;
  scanf("%d", &n);
  for (; i < n; i++) {
    scanf("%d%c", &num, &tipo);
    total += num;
    if (tipo == 'C') {
      c += num;
    } else if (tipo == 'S') {
      s += num;
    } else if (tipo == 'R') {
      r += num;
    }
  }
  printf("Total:%dcobaias\n", total);
  printf("Totaldecoelhos:%d\n", c);
  printf("Totalderatos:%d\n", r);
  printf("Totaldesapos:%d\n", s);
  printf("Percentualdecoelhos:%.2f%%\n", (c * 100.00) / total);
  printf("Percentualderatos:%.2f%%\n", (r * 100.00) / total);
  printf("Percentualdesapos:%.2f%%\n", (s * 100.00) / total);
}
