#include <stdio.h>
#include <string.h>
void imprimeEspaco(int i) {
  int j;
  for (j = 0; j < i; j++) {
    printf("");
  }
}
void imprime(char p[], int tam) {
  int j;
  for (j = 0; j < tam; j++) {
    printf("%c", p[j]);
    if (j < tam - 1) {
      printf("");
    }
  }
}

int main() {
  int i, tam;
  char p[100];
  while (scanf("%s", p) != EOF) {
    tam = strlen(p);
    for (i = 0; i < tam; i++) {
      imprimeEspaco(i);
      imprime(p, tam - i);
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
