#include <stdio.h>

using namespace std;

int main() {
  int n, q, q2, n2;
  float valor, valor2;
  scanf("%d%d%f", &n, &q, &valor);
  scanf("%d%d%f", &n2, &q2, &valor2);
  valor = q * valor;
  valor = valor + (q2 * valor2);
  printf("VALORAPAGAR:R$%.2f\n", valor);
  return 0;
}
