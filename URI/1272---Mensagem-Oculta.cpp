#include <stdio.h>
#include <string.h>
void descodifica(char m[], int tam, char vet[]) {
  int i, c;
  for (i = 0, c = 0; i < tam; ++i) {
    if (i == 0 && m[0] != '' ) {
      vet[c] = m[0];
      c++;
    }
    if (m[i] == '' && m[i + 1] == '' )

      continue;

    if (m[i] == '' && m[i + 1] != '' ) {
      vet[c] = m[i + 1];
      c++;
    }
  }
  vet[c] = '\0';
}

int main() {
  int i, n, tam;
  char m[5000], vet[5000];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%[^\n]s", m);
    tam = strlen(m);
