#include <stdio.h>

using namespace std;

int main() {
  int mes, ano, dia, resto;
  scanf("%d", &dia);
  ano = dia / 365;
  resto = dia % 365;
  mes = resto / 30;
  resto = resto % 30;
  dia = resto;

  printf("%dano(s)\n", ano);
  printf("%dmes(es)\n", mes);
  printf("%ddia(s)\n", dia);

  return 0;
}
