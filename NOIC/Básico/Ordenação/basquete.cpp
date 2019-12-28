#include <bits/stdc++.h>
using namespace std;

vector<int> pontos,cestas,cestas_sofridas,nome;
vector<int> ordem;

bool classificar(int x,int y){
    if(pontos[x] != pontos[y]) return pontos[x] > pontos[y];
    float media,media2;
    if(cestas_sofridas[x] == 0){
        media = cestas[x];
    }
    else {
        media = cestas[x]/cestas_sofridas[x];
    }
    if(cestas_sofridas[y] == 0){
        media2 = cestas[y];
    }
    else {
        media2 = cestas[y]/cestas_sofridas[y];
    }
    if(media != media2) return media > media2;

    else if(cestas[x] != cestas[y]) return cestas[x] > cestas[y];
    else
        return nome[x] > nome[y];


}
int main(){
    int t;
    int cont = 1;
    cin >> t;
    while(true){
        if(t == 0)break;
        
        pontos.resize(t);
        cestas.resize(t);
        cestas_sofridas.resize(t);
        nome.resize(t);
        ordem.resize(t);
        int time1,time2,pontos2,pontos1;
        for (int i = 0; i < t; i++)
        {
            nome[i] = ordem[i] = i;
            pontos[i] = cestas[i] = cestas_sofridas[i] = 0;
        }
        for (int i = 0; i < (t*(t-1)/2); i++)
        {
            cin >> time1 >> pontos1 >> time2 >> pontos2;
            cestas[time1-1] += pontos1;
            cestas[time2-1] += pontos2;
            cestas_sofridas[time1-1] += pontos2;
            cestas_sofridas[time2-1] += pontos1;
            if(pontos1 > pontos2){
                pontos[time1-1] += 2;
                pontos[time2-1] += 1;
            }
            else {
                pontos[time1-1] += 1;
                pontos[time2-1] += 2;
            }

        }

        sort(ordem.begin(),ordem.end(),classificar);
        printf("Instancia %d\n",cont++);
        for(int i  = 0; i < t; i++){
              printf("%d",nome[ordem[i]]+1);
            if(i < t -1)
              printf(" ");
            else {
                printf("\n");
            }
        }
        cin >> t;
        if(t == 0) break;
        printf("\n");
        // for (int i = 0; i < t; i++)
        // {
            
        // cout << "  " << nome[i]+1<< " " << pontos[i]<< " "<< cestas[i]<< " "<< cestas_sofridas[i] << "\n";
        // }
        pontos.clear();
        cestas.clear();
        cestas_sofridas.clear();
        nome.clear();
        ordem.clear();
        



    }

   
    
    
    return 0;
}