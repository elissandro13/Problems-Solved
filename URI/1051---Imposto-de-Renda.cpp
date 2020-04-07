#include <stdio.h>

int main() {
  float salario, reajuste;
  scanf("%f", &salario);
  if (salario <= 2000) {
    printf("Isento\n");
  } else {
    if (salario <= 3000) {
      reajuste = ((salario - 2000) * 0.08);
    } else if (salario <= 4500) {
      reajuste = (1000 * 0.08) + ((salario - 3000) * 0.18);
    } else {
      reajuste = (1000 * 0.08) + (1500 * 0.18) + ((salario - 4500) * 0.28);
    }
    printf("R$%.2f\n", reajuste);
  }

  return 0;
}
