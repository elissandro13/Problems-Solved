#include <bits/stdc++.h>

using namespace std; 

int n;
int peso[10010],suporta[10010];
int dp[10010][10010];

struct caixa {
    int peso;
    int suporta;
};
caixa caixas[10010];

bool ordena(caixa a,caixa b){
    a.suporta > b.suporta;
}
int solve(int item,int res){
    

}   
int main(){

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> caixas[i].peso >> caixas[i].suporta;
    }
    
    
    //ordeno
    sort(caixas,caixas+n,ordena);
    //começo com cada caixa
    cout << solve(n,100010) << endl;
    

    return 0;
}