#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Tes,Pe,Pa,Sp,Lar
int main() {
  int n, i, escolha1 = 7, escolha2 = 6;
  char s[100], r[100];
  scanf("%d", &n);
  for (i = 0; i < n; ++i) {
    scanf("%s%s", s, r);
    if (strcmp(s, "tesoura") == 0)
      escolha1 = 1;
    else if (strcmp(s, "papel") == 0)
      escolha1 = 2;
    else if (strcmp(s, "pedra") == 0)
      escolha1 = 3;
    else if (strcmp(s, "spock") == 0)
      escolha1 = 4;
    else
      escolha1 = 5;
    if (strcmp(r, "tesoura") == 0)
      escolha2 = 1;
    else if (strcmp(r, "papel") == 0)
      escolha2 = 2;
    else if (strcmp(r, "pedra") == 0)
      escolha2 = 3;
    else if (strcmp(r, "spock") == 0)
      escolha2 = 4;
    else
      escolha2 = 5;
    if (escolha1 == escolha2)
      printf("empate\n");
    // Tesouracortapapel
    else if (escolha1 == 1 && escolha2 == 2)
      printf("rajesh\n"); // Tes,Pa,Pe,Sp,Lar
    else if (escolha1 == 2 && escolha2 == 1)
      printf("sheldon\n");
    // Papelcobrepedra
    else if (escolha1 == 2 && escolha2 == 3)
      printf("rajesh\n");
    else if (escolha1 == 3 && escolha2 == 2)
      printf("sheldon\n");
    // Pedraderrubalagarto
    else if (escolha1 == 3 && escolha2 == 5)
      printf("rajesh\n");
    else if (escolha1 == 5 && escolha2 == 3)
      printf("sheldon\n");
    // LagartoadormeceSpock
    else if (escolha1 == 5 && escolha2 == 4)
      printf("rajesh\n");
    else if (escolha1 == 4 && escolha2 == 5)
      printf("sheldon\n");
    // Spockderretetesoura
    else if (escolha1 == 4 && escolha2 == 1)
      printf("rajesh\n");
    else if (escolha1 == 1 && escolha2 == 4)
      printf("sheldon\n");
    // Tesouraprendelagarto
    else if (escolha1 == 1 && escolha2 == 5)
      printf("rajesh\n"); // Tes,Pa,Pe,Sp,Lar
    else if (escolha1 == 5 && escolha2 == 1)
      printf("sheldon\n");
