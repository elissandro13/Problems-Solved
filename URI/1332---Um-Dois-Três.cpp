#include <stdio.h>
#include <string.h>

int main() {
  int n, i, tam;
  char p[1000];
  scanf("%d", &n);
  for (i = 0; i < n; ++i) {
    scanf("%s", &p);
    tam = strlen(p);
    if (tam == 3) {
      if ((p[0] == 'o' && p[1] == 'n' && p[2] == 'e') ||
          (p[0] == 'o' && p[1] == 'n') || (p[0] == 'o' && p[2] == 'e') ||
          (p[1] == 'n' && p[2] == 'e')) {
        printf("1\n");
      } else
        printf("2\n");

    } else {
      printf("3\n");
    }
  }

  return 0;
}
