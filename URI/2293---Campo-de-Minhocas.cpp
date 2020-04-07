#include <iostream>
using namespace std;

int main() {

  int l, c;
  cin >> l >> c;
  int vet[1000][1000], soma[1000], soma2[1000], maior = 0;

  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      cin >> vet[i][j];
      soma[i] += vet[i][j];
    }
  }

  for (int j = 0; j < c; j++) {
    for (int i = 0; i < l; i++) {
      soma2[j] += vet[i][j];
    }
  }

  for (int i = 0; i < l; i++) {
    if (soma[i] > maior)
      maior = soma[i];
  }

  for (int j = 0; j < c; j++) {
    if (soma2[j] > maior)
      maior = soma2[j];
  }

  cout << maior << "\n";
}
