#include <iostream>
using namespace std;

int main() {
  int n[101], maior = 0, pos = 0;

  for (int i = 0; i < 100; i++) {
    cin >> n[i];
    if (n[i] > maior) {
      maior = n[i];
      pos = i;
    }
  }
  cout << maior << "\n";
  cout << pos + 1 << "\n";

  return 0;
}
