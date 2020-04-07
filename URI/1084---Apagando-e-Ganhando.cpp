#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, d;
  while (cin >> n >> d) {
    if (n == 0 && d == 0) {
      break;
    }

    int apagados = 0;
    stack<char> pilha;
    for (int i = 0; i < n; i++) {
      char num;

      cin >> num;

      if (pilha.empty()) {
        pilha.push(num);
      }

      else {

        while (!pilha.empty() && apagados < d && num > pilha.top()) {
          apagados++;
          pilha.pop();
        }

        if (pilha.size() < n - d)
          pilha.push(num);
      }
    }
    vector<char> v;
    while (!pilha.empty()) {
      v.push_back(pilha.top());
      pilha.pop();
    }
