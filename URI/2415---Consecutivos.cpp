#include <iostream>
using namespace std;

int main() {

  int n, vet[10001], maior = 1, seq = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> vet[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (vet[i] == vet[i + 1]) {
      seq++;
    }
    if (seq > maior) {
      maior = seq;
    }
    if (vet[i] != vet[i + 1]) {
      seq = 0;
    }
  }

  if (maior >= 2) {
    cout << maior + 1 << "\n";
  } else {
    cout << maior << "\n";
  }

  return 0;
}
