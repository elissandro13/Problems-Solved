#include <bits/stdc++.h>

#define MAXN100100
using namespace std;

int pai[MAXN], peso[MAXN];

int find(int x) {
  if (pai[x] == x) {
    return x;
  }

  return pai[x] = find(pai[x]);
}

void join(int x, int y) {
  x = find(x);
  y = find(y);

  if (x == y) {
    return;
  }

  if (peso[x] < peso[y]) {
    pai[x] = y;
  }
  if (peso[x] > peso[y]) {
    pai[y] = x;
  }

  if (peso[x] == peso[y]) {

    pai[x] = y;
    peso[y]++;
  }
}

int main() {

  int n, d;
  cin >> n >> d;
