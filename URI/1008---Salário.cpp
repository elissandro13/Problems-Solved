#include <stdio.h>

using namespace std;

int main() {
  int n;
  float h, d, t;
  scanf("%d", &n);
  scanf("%f", &h);
  scanf("%f", &d);
  t = d * h;
  printf("NUMBER=%d\n", n);
  printf("SALARY=U$%.2f\n", t);
  return 0;
}
