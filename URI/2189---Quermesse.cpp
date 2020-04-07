#include <iostream>
using namespace std;

int main() {
  int n;
  int vez = 0;
  while (cin >> n && n != 0) {
    int vet[n + 1];
    for (int i = 1; i <= n; ++i) {
      cin >> vet[i];
      if (vet[i] == i) {

        cout << "Teste" << ++vez << "\n";
        cout << i << "\n\n";
      }
    }
  }
  return 0;
}
