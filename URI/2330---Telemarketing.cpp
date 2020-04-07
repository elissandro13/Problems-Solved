#include <cstdio>
#include <queue>

#define MAXN1010
#define MAXL1000100

using namespace std;

int n, l, t, qtd[MAXN];

struct atendente { // declaroastructatendente

  int id, livre; // elaterádoisinteiroscomomembros

  // teráumconstrutorparaatribuirvaloresaosmembros
  atendente(int id_, int livre_ = 0) {
    id = id_;
    livre = livre_;
  }

  // terátambémumoperador>,paracompará-lacomoutroatendente

  // notequeapriority_queueordenadomaiorparaomenor
  // logoesteoperadordeveretornartrueseastructvemantesnaordenação
  bool operator>(const atendente x) const {

    // seelesficaremlivresemmomentosdiferentes
    if (livre != x.livre)
      return livre < x.livre; // eleretornaoqueficalivreantes
    return id < x.id;         // casocontrário,retornaodemenorid
  }

  // criotambémooperador<demaneiraanálogaao>
  bool operator<(const atendente x) const {

    if (livre != x.livre)
      return livre > x.livre;
    return id > x.id;
  }
};

priority_queue<atendente> heap; // crioapriority_queuedeatendentedenome"heap"

int main() {

  scanf("%d%d", &n, &l); // leioosvaloresdenel
