#include <stdio.h>

int main() {
  float a, b, c, aux;
  scanf("%f%f%f", &a, &b, &c);
  if (b > a && b > c) {
    aux = a;
    a = b;
    b = aux;
  } else if (c > a) {
    aux = a;
    a = c;
    c = aux;
  }
  // printf("%f\n",a);
  // printf("%f\n",b);
  // printf("%f\n",c);
  if (a >= b + c) {
    printf("NAOFORMATRIANGULO\n");

  }

  else {
    if (a * a == b * b + c * c) {
      printf("TRIANGULORETANGULO\n");
    }
    if (a * a > b * b + c * c) {
      printf("TRIANGULOOBTUSANGULO\n");
    }
    if (a * a < b * b + c * c) {
      printf("TRIANGULOACUTANGULO\n");
    }
    if (a == b && a == c) {
      printf("TRIANGULOEQUILATERO\n");
    } else if (a == b || a == c || c == b) {
      printf("TRIANGULOISOSCELES\n");
    }
