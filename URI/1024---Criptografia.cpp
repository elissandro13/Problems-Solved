#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void deslocamento_1(char mensagem[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    if ((mensagem[i] >= 'a' && mensagem[i] <= 'z') ||
        (mensagem[i] >= 'A' && mensagem[i] <= 'Z')) {
      mensagem[i] = mensagem[i] + 3;
    }
  }
}
void deslocamento_2(char mensagem[], int tam) {
  int i;
  for (i = tam / 2; i < tam; i++) {
    mensagem[i] -= 1;
  }
}
void ivt(char mensagem[], int tam) {
  int aux, i;
  for (i = 0; i < tam / 2; i++) {
    aux = mensagem[i];
    mensagem[i] = mensagem[tam - i - 1];
    mensagem[tam - i - 1] = aux;
  }
}

int main() {
  int n, i, tam;
  char mensagem[1000];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%[^\n]s", mensagem);
    tam = strlen(mensagem);
    deslocamento_1(mensagem, tam);
    ivt(mensagem, tam);
