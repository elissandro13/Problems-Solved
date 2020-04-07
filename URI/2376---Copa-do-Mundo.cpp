#include <stdio.h>

int main() {
  int i, M[15], N[15];
  char p[15];

  for (i = 1; i <= 15; ++i) {
    scanf("%d%d", &M[i], &N[i]);
  }
  // Oitavas
  if (M[1] > N[1])
    p[1] = 'A';
  else
    p[1] = 'B';
  if (M[2] > N[2])
    p[2] = 'C';
  else
    p[2] = 'D';
  if (M[3] > N[3])
    p[3] = 'E';
  else
    p[3] = 'F';
  if (M[4] > N[4])
    p[4] = 'G';
  else
    p[4] = 'H';
  if (M[5] > N[5])
    p[5] = 'I';
  else
    p[5] = 'J';
  if (M[6] > N[6])
    p[6] = 'K';
  else
    p[6] = 'L';
  if (M[7] > N[7])
    p[7] = 'M';
  else
    p[7] = 'N';
  if (M[8] > N[8])
    p[8] = 'O';
  else
    p[8] = 'P';
  // Quartas
  if (M[9] > N[9])
    p[9] = p[1];
  else
    p[9] = p[2];
  if (M[10] > N[10])
    p[10] = p[3];
  else
    p[10] = p[4];
  if (M[11] > N[11])
    p[11] = p[5];
  else
    p[11] = p[6];
  if (M[12] > N[12])
    p[12] = p[7];
  else
    p[12] = p[8];
  // Semi
  if (M[13] > N[13])
    p[13] = p[9];
  else
    p[13] = p[10];
  if (M[14] > N[14])
    p[14] = p[11];
  else
    p[14] = p[12];
  // Final
