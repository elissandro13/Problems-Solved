#include <stdio.h>

int main() {
  int a, b, c, aux, maior, meio, menor;
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c) {
    if (b > c) {
      maior = a;
      meio = b;
      menor = c;
    }
    if (c > b) {
      maior = a;
      menor = b;
      meio = c;
    }
  }
  if (b > a && b > c) {
    if (a > c) {
      maior = b;
      meio = a;
      menor = c;
    }
    if (c > a) {
      maior = b;
      menor = a;
      meio = c;
    }
  }
  if (c > b && c > a) {
    if (b > a) {
      maior = c;
      meio = b;
      menor = a;
    }
    if (a > b) {
      maior = c;
      menor = b;
