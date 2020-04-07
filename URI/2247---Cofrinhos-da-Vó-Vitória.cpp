#include <iostream>
using namespace std;

int main() {

  int n;
  int vez = 0;
  while (cin >> n) {
    if (n == 0)
      break;
    int res = 0;
    int x, y;
    cin >> x >> y;
    res = x - y;
    cout << "Teste" << ++vez << "\n";
    for (int i = 1; i < n; ++i) {
      cout << res << "\n";
      cin >> x >> y;
      res += (x - y);
    }
    cout << res << "\n";
    cout << "\n";
    res = 0;
  }
}
