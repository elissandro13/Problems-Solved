#include <iostream>
using namespace std;

int main() {
  int n, a, b, x;
  char o;
  cin >> n;
  cin >> a;
  cin >> o;
  cin >> b;

  if (o == '+') {
    x = a + b;
  } else {
    x = a * b;
  }
  if (x <= n)
    cout << "OK\n";
  else
    cout << "OVERFLOW\n";
}
