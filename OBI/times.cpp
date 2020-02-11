#include <bits/stdc++.h>
using namespace std;

int n,k;

struct jogador {
    int valor;
    string nome;
    int time;
};



bool ordena(jogador a,jogador b){
    if(a.time ==  b.time)
        return a.nome < b.nome;
    
    return a.time < b.time;
}
bool compara(jogador a,jogador b){
  
    return a.valor > b.valor;
}
int main(){

    cin >> n >> k;
    jogador jogadores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> jogadores[i].nome >> jogadores[i].valor;
        

    }
    sort(jogadores,jogadores+n,compara);
    int cont = 1;
    for (int i = 0; i < n; i++)
    {
        jogadores[i].time = cont++;
        if(cont == 4)
            cont = 1;

    }

    sort(jogadores,jogadores+n,ordena);
    for (int i = 1; i <= k; i++)
    {   
        cout << "Time " << i << endl;
        for (int j = 0; j < n; j++)
        {
                if(jogadores[j].time == i)
                cout << jogadores[j].nome << endl;
        }
        cout << endl;
        
    }
    
    
    
    return 0;
}