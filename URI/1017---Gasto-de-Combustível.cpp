#include <stdio.h>

using namespace std;

int main() {
  float m;
  float x, y;
  scanf("%f%f", &x, &y);
  m = (x * y) / 12;
  printf("%.3f\n", m);
  return 0;
}
