#include <cstdio>

char resposta = 'N';
int v, m;
bool matriz[1010][100010];
int moeda[1010];

void busca(int coin, int soma) // funçãorecursivadaPDTop-Down
{
  if (matriz[coin][soma])
    return; // sejátivermoscalculadoesseestadodaPD,afunçãoretorna

  matriz[coin][soma] = 1; // marcamosoestadoatualcomocalculado

  if (soma == v) // seasomaforovalordesejado
  {
    resposta = 'S'; // respostarecebe'S'
    return;         // eafunçãoretorna
  }

  // Sejátivermost=olhadotodasasmoedas,ousuperadoasomadesejada
  if (coin > m || soma > v)
    return; // afunçãoretorna

  busca(coin + 1,
        soma + moeda[coin]); // testamostodasapossibilidadescomamoedaatual
  busca(coin + 1, soma);     // testamostodasapossibilidadessemamoedaatual
}

int main() {
  scanf("%d%d", &v, &m); // lemososvaloresdevem

  for (int i = 1; i <= m; i++)
    scanf("%d", &moeda[i]); // lemososvaloresdecadamoeda

  busca(1, 0); // chamamosafunçãodaPD

  printf("%c\n", resposta); // imprimimosarespostaseguidadequebradelinha

  return 0;
}
