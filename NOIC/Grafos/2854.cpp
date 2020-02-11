#include <bits/stdc++.h>

using namespace std;
int p,r;
bool checar[1000];
map <string,int> pessoas;
vector <int> lista[1000];

void dfs(int x){
    for (int i = 0; i < (int)lista[x].size(); i++)
    {
        int  indiv = lista[x][i];
        if(!checar[indiv]){
            checar[indiv] = true;
            dfs(indiv);
        }
    }
    
}
int main(){
    int cont = 0;
    string pessoa1,pessoa2,relacao;
    
    cin >> p >> r;
    cin.ignore();
    for (int i = 0; i < p; i++)
    {
        checar[i] = false;
    }
    for (int i = 0; i < r; i++)
    {
        cin >> pessoa1 >> relacao >> pessoa2;
        if(pessoas.find(pessoa1) == pessoas.end()){
            pessoas[pessoa1] = cont++;
        }
        if(pessoas.find(pessoa2) == pessoas.end()){
            pessoas[pessoa2] = cont++;
        }
        lista[pessoas[pessoa1]].push_back(pessoas[pessoa2]);
        lista[pessoas[pessoa2]].push_back(pessoas[pessoa1]);
    }
    int familias = 0;
    for (int i = 0; i < p; i++)
    {
        if(!checar[i]){
            familias++;
            checar[i] = true;
             dfs(i);
        }
    }
    cout << familias << endl;
    
    
    
    return 0;
}
