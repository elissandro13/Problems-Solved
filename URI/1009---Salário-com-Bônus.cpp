#include <stdio.h>

using namespace std;

int main() {
  char nome;
  double v, s;
  scanf("%s%lf%lf", &nome, &s, &v);
  s = s + (0.15 * v);
  printf("TOTAL=R$%.2lf\n", s);
}
