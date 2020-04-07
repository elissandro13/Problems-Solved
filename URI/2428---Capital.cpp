#include <stdio.h>
int check(int A, int B, int C, int D);
int main() {
  int A, B, C, D;
  scanf("%d%d%d%d", &A, &B, &C, &D);
  if (check(A, B, C, D) || check(A, D, B, C) || check(A, C, D, B))
    printf("S\n");
  else
    printf("N\n");
  return 0;
}
int check(int A, int B, int C, int D) { return (A * B == C * D); }
