#include <bits/stdc++.h>

using namespace std;

vector <pair<int,int>> arv;
int cont = 0;
bool saida = true;
int n,d;

bool pular(int x,int y,int a,int b){
    return ((a-x) + (b-y)) <= d;
}
void dfs(int x,int y){
    cont++;
    if(cont <= arv.size()){
        if(pular(x,y,arv[cont].first,arv[cont].second)){
            dfs(arv[cont].first,arv[cont].second);
        }
        else {
            cout << x << " " <<  y;
            cout << "oi" <<arv[cont].first << " " << arv[cont].second;

            saida = false;
            return;
        }
    }
}
int main(){
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        arv.push_back(make_pair(x,y));
    }
    //sort(arv.begin(),arv.end());

    dfs(arv[0].first,arv[0].second);
    if(saida){
        cout << "S\n";
    } else {
        cout << "N\n";
    }
    return 0;
}