#include <stdio.h>
#include <stdlib.h>

int main() {
  int t1, t2, tempo = 0;
  scanf("%d%d", &t1, &t2);
  if (t1 > t2) {
    tempo = 24 - (t1 - t2);
  }
  // if(t1=t2){
  // tempo=24;
  //}
  else if (t1 < t2) {
    tempo = (t2 - t1);
  } else {
    tempo = 24;
  }
  printf("OJOGODUROU%dHORA(S)\n", tempo);

  return 0;
}
