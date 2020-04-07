#include <stdio.h>
#include <string.h>

int main() {
  int tam1, tam2, cont = 0, i, j;
  char bac[1000], res[1000];
  while (scanf("%s", bac) != EOF && scanf("%s", res) != EOF) {
    if (strstr(bac, res))
      printf("Resistente\n");
    else
      printf("Naoresistente\n");
  }
  return 0;
}
