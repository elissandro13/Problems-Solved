#include <stdio.h>

int main() {
  int a, b, j, n;
  char um[50];
  char dois[50];
  scanf("%d", &n);
  while (n--) {
    scanf("%s%s", um, dois);
    a = 0;
    b = 0;
    for (j = 0; j < 50; j++) {
      if (um[j] == '\0')
        a = 1;
      if (dois[j] == '\0')
        b = 1;
      if (a == 1 && b == 1)
        break;
      if (a == 0)
        printf("%c", um[j]);
      if (b == 0)
        printf("%c", dois[j]);
    }
    printf("\n");
  }

  return 0;
}
