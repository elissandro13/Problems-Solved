#include <bits/stdc++.h>

using namespace std;
int n,valor,moedas[100010];
char resposta = 'N';
int minTotal = 100000;
bool dp[10010][100010] = {0};
void solve(int coin,int total,int cont){

    if(dp[coin][total]) return;
    dp[coin][total] = true;
    if(total == valor){
        resposta = 'S';
        minTotal = min(minTotal,cont);
        cout << "cont" << cont;   
        return;
    }
    if(coin > n || total > valor) return;
    solve(coin+1,total+moedas[coin],cont+1);
    solve(coin+1,total,cont+1);
}
int main(){

    cin >> valor >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> moedas[i];
    }
    
    solve(1,0,0);
    cout << minTotal << endl;
    return 0;
}