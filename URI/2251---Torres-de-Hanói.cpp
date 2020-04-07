#include <cstdio>
#include <iostream>
using namespace std;
int i = 0;

int towerOfHanoi(int n, int x) {
  if (n == 0)
    return 1;
  return x * towerOfHanoi(n - 1, 2);
}

int main() {
  int n, vez = 0;
  while (cin >> n && n != 0) {
    i = 0;
    i = towerOfHanoi(n, 2); // A,BandCarenamesofrods
    cout << "Teste" << ++vez << "\n" << i - 1 << "\n\n";
  }
  return 0;
}
