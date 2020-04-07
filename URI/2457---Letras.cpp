#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
  char c;
  string s;
  int nword = 0, nok = 0;

  cin >> c;

  while (cin >> s) {
    nword++;
    if (count(s.begin(), s.end(), c))
      nok++;
  }
  printf("%.1f\n", 100.0 * nok / nword);

  return 0;
}
