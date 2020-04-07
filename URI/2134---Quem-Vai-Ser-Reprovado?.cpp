#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {
  int instancia = 1;
  int entrada = 0;
  vector<pair<string, int>> nomes;

  while (cin >> entrada) {
    nomes.clear();
    for (int i = 0; i < entrada; i++) {
      string nome = "";
      int nota = 0;

      cin >> nome >> nota;
      pair<string, int> p(nome, nota);
      nomes.push_back(p);
    }

    sort(nomes.begin(), nomes.end());
    // for(size_ti=0;i<4;i++)
    //{
    // cout<<nomes[i].first<<endl;
    //}

    string aluno = nomes[0].first;
    int menorNota = nomes[0].second;
    for (int i = 1; i < nomes.size(); i++) {
      if (nomes[i].second <= menorNota) {
        aluno = nomes[i].first;
        menorNota = nomes[i].second;
      }
