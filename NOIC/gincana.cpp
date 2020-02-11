#include <bits/stdc++.h>


using namespace std;
int pessoas,relacoes;
bool checar[100100];
vector <int> lista[100100];

void dfs(int x){
    for (int i = 0; i < lista[x].size(); i++)
    {
        int indiv = lista[x][i];
        if(!checar[indiv]){
            checar[indiv] = true;
            dfs(indiv);
        }
    }
    
}
int main(){
    cin >> pessoas >> relacoes;
    int times =  0;
    for (int i = 0; i <= pessoas; i++)
    {
        checar[i] = false;
    }
    int x,y;
    for (int i = 0; i < relacoes; i++)
    {
        cin >> x >> y;
        lista[x].push_back(y);
        lista[y].push_back(x);
    }
    
    for (int i = 1; i <= pessoas; i++)
    {
        if(!checar[i]){
            checar[i] = true;
            times++;
            dfs(i);
        }
    }
    cout << times << endl;
    

    

    return 0;
}