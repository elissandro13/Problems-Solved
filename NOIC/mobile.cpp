#include <bits/stdc++.h>

#define MAXN 100100 

using namespace std;
struct Peca {
    vector <int> filhos;
    int peso;

    Peca(){
        peso = 1;
    }
} pecas[MAXN];

bool balanceado(int x){

    int prev;
    for (auto it = pecas[x].filhos.begin(); it != pecas[x].filhos.end(); it++)
    {
        //testar os filhos primeiro( botton - top)
        if (!balanceado(*it))
            return false;
        //iniciar a variavel de comparacao
        if (it == pecas[x].filhos.begin()) 
            prev = pecas[*it].peso;
        //se os filhos n tiverem os mesmo pesso n está equilibrado 
        if(pecas[*it].peso != prev){
            return false;
        }
        pecas[x].peso += pecas[*it].peso;
    }
    
    return true;
}


int main(){
    int n;
    cin >> n;
    int pai,filho;
    for (int  i = 0; i < n; i++)
    {
        cin >> filho >> pai;
        pecas[pai].filhos.push_back(filho);
    }
    if(balanceado(0)){
        cout << "bem";
    } else {
        cout << "mal";
    }

    cout << endl;
    
    return 0;
}