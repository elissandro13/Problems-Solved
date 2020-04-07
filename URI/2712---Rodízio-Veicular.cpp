#include <stdio.h>

int main() {
  char p[101];
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", p);
    if (((int)p[0] >= 65 && (int)p[0] <= 90) &&
        ((int)p[1] >= 65 && (int)p[1] <= 90) &&
        ((int)p[2] >= 65 && (int)p[2] <= 90) && (p[3] == '-') &&
        ((int)p[4] >= 48 && (int)p[4] <= 57) &&
        ((int)p[5] >= 48 && (int)p[5] <= 57) &&
        ((int)p[6] >= 48 && (int)p[6] <= 57) &&
        ((int)p[7] >= 48 && (int)p[7] <= 57) && (p[8] == '\0')) {
      if (p[7] == '1' || p[7] == '2') {
        printf("MONDAY\n");
      }
      if (p[7] == '3' || p[7] == '4') {
        printf("TUESDAY\n");
      }
      if (p[7] == '5' || p[7] == '6') {
        printf("WEDNESDAY\n");
      }
      if (p[7] == '7' || p[7] == '8') {
        printf("THURSDAY\n");
      }
      if (p[7] == '9' || p[7] == '0') {
        printf("FRIDAY\n");
      }
    } else {
      printf("FAILURE\n");
    }
  }
  return 0;
}
