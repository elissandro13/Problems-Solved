#include <stdio.h>

int main() {
  float n1, n2, n3, n4, n5, media;
  scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
  n1 *= 2;
  n2 *= 3;
  n3 *= 4;
  n4 *= 1;
  media = (n1 + n2 + n3 + n4) / 10;
  printf("Media:%.1f\n", media);
  if (media < 7 && media >= 5) {
    printf("Alunoemexame.\n");
    scanf("%f", &n5);
    printf("Notadoexame:%.1f\n", n5);
    media = (media + n5) / 2;
    if (media >= 5) {
      printf("Alunoaprovado.\n");
      printf("Mediafinal:%.1f\n", media);
    } else {
      printf("Alunoreprovado.\n");
      printf("Mediafinal:%.1f\n", media);
    }
  } else if (media >= 7) {
    printf("Alunoaprovado.\n");
  } else if (media < 5) {
    printf("Alunoreprovado.\n");
  }
  return 0;
}
