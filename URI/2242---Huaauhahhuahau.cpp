#include <stdio.h>
#include <string.h>
void consoantes(char risada[], int tam, char vet[]) {
  int i, c;
  for (i = 0, c = 0; i < tam; ++i) {
    if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' ||
        risada[i] == 'o' || risada[i] == 'u') {
      vet[c] = risada[i];
      c++;
    }
    vet[c] = '\0';
  }
}
void palindromo(char vet[]) {
  int i, j, tam2;
  tam2 = strlen(vet);
  for (i = 0, j = 0; i < tam2 / 2; i++) {
    if (vet[i] == vet[tam2 - 1 - i])
      j++;
  }
  if (j == tam2 / 2)
    printf("S\n");
  else
    printf("N\n");
}

int main() {
  int tam;
  char risada[50], vet[50];
  scanf("%s", risada);
  tam = strlen(risada);
  consoantes(risada, tam, vet);
  // printf("%s",vet);
  palindromo(vet);
  return 0;
}
