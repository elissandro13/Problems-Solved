#include <bits/stdc++.h>

using namespace std;
int m, n;
#define MAXN100100
bool checar[MAXN];
vector<int> lista[MAXN];

void dfs(int x) {
  for (int i = 0; i < (int)lista[x].size(); i++) {
    int indiv = lista[x][i];
    if (!checar[indiv]) {
      checar[indiv] = true;
      dfs(indiv);
    }
  }
}
int main() {
  int cont = 0;
  int pessoa1, pessoa2;
  cin >> m >> n;
  for (int i = 1; i <= m; i++) {
    checar[i] = false;
  }

  for (int i = 0; i < n; i++) {
    cin >> pessoa1 >> pessoa2;
    lista[pessoa1].push_back(pessoa2);
    lista[pessoa2].push_back(pessoa1);
  }
  int familias = 0;
  for (int i = 1; i <= m; i++) {
    if (!checar[i]) {
      familias++;
      checar[i] = true;
