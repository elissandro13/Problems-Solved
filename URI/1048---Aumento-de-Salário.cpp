#include <stdio.h>

int main() {
  float salario, reajuste;
  int per;
  scanf("%f", &salario);
  if (salario <= 400) {
    per = 15;
  } else if (salario <= 800) {
    per = 12;
  } else if (salario <= 1200) {
    per = 10;
  } else if (salario <= 2000) {
    per = 7;
  } else {
    per = 4;
  }
  reajuste = (per / 100.0) * salario;
  printf("Novosalario:%.2f\n", salario + reajuste);
  printf("Reajusteganho:%.2f\n", reajuste);
  printf("Empercentual:%i%%\n", per);

  return 0;
}
