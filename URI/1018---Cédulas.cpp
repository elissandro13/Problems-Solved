#include <stdio.h>

int main() {
  int n100, n50, n20, n10, n5, n2, n1, resto, valor;
  scanf("%d", &valor);
  n100 = valor / 100;
  resto = valor % 100;
  n50 = resto / 50;
  resto = resto % 50;
  n20 = resto / 20;
  resto = resto % 20;
  n10 = resto / 10;
  resto = resto % 10;
  n5 = resto / 5;
  resto = resto % 5;
  n2 = resto / 2;
  resto = resto % 2;
  n1 = resto / 1;
  printf("%d\n", valor);
  printf("%dnota(s)deR$100,00\n", n100);
  printf("%dnota(s)deR$50,00\n", n50);
  printf("%dnota(s)deR$20,00\n", n20);
  printf("%dnota(s)deR$10,00\n", n10);
  printf("%dnota(s)deR$5,00\n", n5);
  printf("%dnota(s)deR$2,00\n", n2);
  printf("%dnota(s)deR$1,00\n", n1);
  return 0;
}
