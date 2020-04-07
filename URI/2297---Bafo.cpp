#include <iostream>
using namespace std;

int main() {
  int r, x = 0;
  cin >> r;
  while (r > 0) {
    x++;
    int s1 = 0, s2 = 0;
    for (int i = 0; i < r; i++) {
      int n1, n2;
      cin >> n1;
      cin >> n2;
      s1 += n1;
      s2 += n2;
    }
    cout << "Teste" << x << "\n";
    if (s1 > s2) {
      cout << "Aldo\n";
    } else {
      cout << "Beto\n";
    }
    cout << "\n";
    cin >> r;
  }
  return 0;
}
