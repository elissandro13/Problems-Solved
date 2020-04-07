#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int cod;
  scanf("%d", &cod);
  switch (cod) {
  case 61:
    printf("Brasilia\n");
    break;
  case 71:
    printf("Salvador\n");
    break;
  case 11:
    printf("SaoPaulo\n");
    break;
  case 21:
    printf("RiodeJaneiro\n");
    break;
  case 32:
    printf("JuizdeFora\n");
    break;
  case 19:
    printf("Campinas\n");
    break;
  case 27:
    printf("Vitoria\n");
    break;
  case 31:
    printf("BeloHorizonte\n");
    break;
  default:
    printf("DDDnaocadastrado\n");
    break;
  }
