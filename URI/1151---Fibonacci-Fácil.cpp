#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int x, y, z;
  z = 0;
  y = 1;
  cout << z << "" << y << "";
  for (int i = 2; i < n; ++i) {
    x = z + y;
    if (i < n - 1)
      cout << x << "";
    else
      cout << x << "\n";
    z = y;
    y = x;
  }

  return 0;
}
