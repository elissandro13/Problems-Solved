#include <stdio.h>

int main() {
  int t, n, i;
  long long int fib[61];
  scanf("%d", &t);
  fib[0] = 0;
  fib[1] = 1;

  for (i = 2; i <= 60; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  for (i = 1; i <= t; i++) {
    scanf("%d", &n);
    printf("Fib(%d)=%lld\n", n, fib[n]);
  }
}
