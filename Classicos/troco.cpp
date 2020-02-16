#include <bits/stdc++.h>

using namespace std;
int n,valor,moedas[100010];
char resposta = 'N';
bool dp[10010][100010] = {0};
void solve(int coin,int total){

    if(dp[coin][total]) return;
    dp[coin][total] = true;
    if(total == valor){
        resposta = 'S';
        return;
    }
    if(coin > n || total > valor) return;
    solve(coin+1,total+moedas[coin]);
    solve(coin+1,total);
}
int main(){

    cin >> valor >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> moedas[i];
    }
    
    solve(1,0);
    return 0;
}