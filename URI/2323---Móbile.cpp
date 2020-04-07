#include <bits/stdc++.h>

#define MAXN100100

using namespace std;
struct Peca {
  vector<int> filhos;
  int peso;

  Peca() { peso = 1; }
} pecas[MAXN];

bool balanceado(int x) {

  int prev;
  for (auto it = pecas[x].filhos.begin(); it != pecas[x].filhos.end(); it++) {
    // testarosfilhosprimeiro(botton-top)
    if (!balanceado(*it))
      return false;
    // iniciaravariaveldecomparacao
    if (it == pecas[x].filhos.begin())
      prev = pecas[*it].peso;
    // seosfilhosntiveremosmesmopessonestáequilibrado
    if (pecas[*it].peso != prev) {
      return false;
    }
    pecas[x].peso += pecas[*it].peso;
  }

  return true;
}

int main() {
  int n;
  cin >> n;
  int pai, filho;
  for (int i = 0; i < n; i++)
