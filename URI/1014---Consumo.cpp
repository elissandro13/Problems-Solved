#include <stdio.h>

using namespace std;

int main() {
  float y, d;
  int x;
  scanf("%d%f", &x, &y);
  d = x / y;
  printf("%.3fkm/l\n", d);
  return 0;
}
