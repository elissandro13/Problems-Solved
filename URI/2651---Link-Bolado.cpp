#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char nome[100010];
  int flag = 0, i;
  scanf("%s", nome);
  for (i = 0; i <= strlen(nome); i++) {
    if ((nome[i] == 'z' || nome[i] == 'Z') &&
        (nome[i + 1] == 'e' || nome[i + 1] == 'E') &&
        (nome[i + 2] == 'l' || nome[i + 2] == 'L') &&
        (nome[i + 3] == 'd' || nome[i + 3] == 'D') &&
        (nome[i + 4] == 'a' || nome[i + 4] == 'A')) {
      printf("LinkBolado\n");
      flag = 1;
    }
  }
  if (flag == 0)
    printf("LinkTranquilo\n");
  return 0;
}
