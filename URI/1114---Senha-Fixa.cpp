#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  while (cin >> n) {
    // cout<<"sas";
    cout << (n == 2002 ? "AcessoPermitido" : "SenhaInvalida");
    cout << "\n";
    if (n == 2002)
      break;
  }
  return 0;
}
