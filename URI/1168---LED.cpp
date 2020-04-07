#include <stdio.h>
#include <string.h>

int main() {
  int n, i, tam, j, x;
  char p[1000];
  scanf("%d", &n);
  for (i = 0; i < n; ++i) {
    scanf("%s", p);
    tam = strlen(p);
    for (j = 0, x = 0; j < tam; ++j) {
      if (p[j] == '1')
        x += 2;
      if (p[j] == '2')
        x += 5;
      if (p[j] == '3')
        x += 5;
      if (p[j] == '4')
        x += 4;
      if (p[j] == '5')
        x += 5;
      if (p[j] == '6')
        x += 6;
      if (p[j] == '7')
        x += 3;
      if (p[j] == '8')
        x += 7;
      if (p[j] == '9')
        x += 6;
      if (p[j] == '0')
        x += 6;
    }
    printf("%dleds\n", x);
  }

  return 0;
}
