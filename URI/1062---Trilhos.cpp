#include <cstdio> //scanfeprintf

#define MAXT1000100 // definoolimiteparaotamanhodapilha

int n, saida[MAXT], pilha[MAXT], tam; // declaroasvariáveisquevouusar

// funçõesdapilha
void pop() {
  if (tam > 0)
    tam--;
}
void push(int x) { pilha[++tam] = x; }
void clear() { tam = 0; }

int top() { return pilha[tam]; }

int main() {

  while (scanf("%d", &n) && n != 0) { // paracadacasodeteste

    while (scanf("%d", &saida[1]) && saida[1] != 0) { // eparacadaexemplodesaída

      for (int i = 2; i <= n; i++)
        scanf("%d", &saida[i]); // terminodeleraordemdesaída

      clear(); // limpoapilha

      int j = 1; // inicializoointj,opróximovagãoqueiráentrar

      push(j++); // colocoovagãojnaferroviaeaumentooseuvalor

      bool deu_errado = false; // variávelcontrole,queguardasenãofoipossível

      for (int i = 1; i <= n; i++) { // paracadavagãonaordemdesaida

        while (top() != saida[i] && j <= n)
          push(j++); // esperoosvagõesentrarematéquechegueoesperado

        if (top() == saida[i])
          pop(); // seelechegar,otirodaferrovia

        else { // setodosentraremenãochegaroesperado

          printf("No\n");    // imprimo"No"
          deu_errado = true; // salvoqueéimpossível
          break;             // efechoofor
        }
