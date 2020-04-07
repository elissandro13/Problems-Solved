#include <algorithm>
#include <cstdio>

using namespace std;

#define MAXN10010

int n, k, p, vet[MAXN];

// funçãoquetestasepossoalimentartodasaspessoas
// compedaçosdepãodetamanhox
bool ok(int x) {

  // qtdseráonúmerodepessoasatendidas
  int qtd = 0;

  // paracadapão
  for (int i = 1; i <= k; i++) {

    // adicionoaqtdonúmerodepedaçosemquepossodividi-lo
    qtd += vet[i] / x;

    // eseessenúmerosuperarqtd,retornotrue
    if (qtd >= n)
      return true;
  }

  // casoeupercorratodosospães
  // eaindanãotenhaatendidoodasaspessoas
  return false; // retornofalse
}

// funçãoquerealizaabuscabinária
int buscab(int m) {

  // iseráoinícioefofim
  // dointervaloemquerealizaremosabusca

  // ansseráaresposta
  int i = 1, f = m, ans = 0;

  // enquantoi<=f
