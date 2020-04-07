#include <stdio.h>

using namespace std;

int main() {
  int a, b, c, m;
  scanf("%d%d%d", &a, &b, &c);
  m = a;
  if (a < b || a < c) {
    if (b < c) {
      m = c;

    } else {
      m = b;
    }
  }
  printf("%dehomaior\n", m);
  return 0;
}
