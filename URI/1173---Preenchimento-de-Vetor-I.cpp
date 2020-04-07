#include <stdio.h>

int main() {
  int valor, n[10], i, ant;
  scanf("%d", &valor);
  n[0] = valor;
  ant = valor;
  for (i = 1; i < 10; i++) {
    if (i == 1) {
      printf("N[0]=%d\n", n[0]);
    }
    n[i] = ant * 2;
    ant = n[i];
    printf("N[%d]=%d\n", i, n[i]);
  }
}
