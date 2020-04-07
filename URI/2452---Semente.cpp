#include <iostream>
using namespace std;

int main() {

  int compr, n, maior, pos, x, dif;
  cin >> compr >> n;
  cin >> x;
  maior = x - 1;
  for (int i = 1; i < n; i++) {
    cin >> pos;
    dif = (pos - x) / 2;
    if (dif > maior)
      maior = dif;
    x = pos;
  }
  if (compr - x > maior) {
    maior = compr - x;
  }
  cout << maior << "\n";
}
