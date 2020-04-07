#include <stdio.h>
int main() {
  int t, n[1000], i, j;
  scanf("%d", &t);
  n[0] = 0;
  j = 0;
  for (i = 0; i < 1000; i++) {
    printf("N[%d]=%d\n", i, j);
    if (j >= t - 1) {
      j = 0;
    } else {
      j += 1;
    }
  }
}
