#include <iostream>
using namespace std;
// intteste(intl,intc,intvet[][],inta,intb){

// if(vet[a][b])
//}
int main() {

  int l, c, a, b, vet[1001][1001];

  cin >> l >> c >> a >> b;
  for (int i = 1; i <= l; i++) {
    for (int j = 1; j <= c; ++j) {
      cin >> vet[i][j];
    }
  }
  // a--;
  // b--;

  while (true) {

    if (vet[a + 1][b] == 1) {
      // baixo
      vet[a][b] = 0;
      a++;

    } else if (vet[a][b + 1] == 1) {
      // esquedo
      vet[a][b] = 0;
      b++;
    } else if (vet[a - 1][b] == 1) {
      // cima
      vet[a][b] = 0;
      a--;

    } else if (vet[a][b - 1] == 1) {
  // direita
