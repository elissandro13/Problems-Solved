#include <stdio.h>

using namespace std;

int main() {
  double r, v;
  scanf("%lf", &r);
  v = (4 / 3.0) * 3.14159 * r * r * r;
  printf("VOLUME=%.3lf\n", v);
  return 0;
}
