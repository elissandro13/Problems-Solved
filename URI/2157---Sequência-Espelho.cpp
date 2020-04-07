#include <stdio.h>
#include <string.h>

int main() {
  int n, m, i, j, t;
  char ss[101];
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &n, &m);
    for (i = n; i <= m; i++)
      printf("%d", i);
    for (i = m; i >= n; i--) {
      sprintf(ss, "%d", i);
      for (j = strlen(ss) - 1; j >= 0; j--)
        printf("%c", ss[j]);
    }
    printf("\n");
  }
  return 0;
}
