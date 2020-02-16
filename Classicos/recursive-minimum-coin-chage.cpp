#include <bits/stdc++.h>

using namespace std;

int n;
int moedas[1100];
int dp[5000][5000];
int INF = 50010;
int change(int value,int coin){


    if(value < 0) return INF;
    if(value == 0) return 0;
    if(coin == n) return INF;
    int& memo = dp[value][coin];
    if(memo == -1){
        memo = min((1+change(value-moedas[coin],coin)),change(value,coin+1));
    }
    return dp[value][coin];
}
    
int main(){

    int value;
    while(cin >> value){
        if(value == 0){
            break;
        }
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> moedas[i];
        }
        //sort(moedas+1,moedas+n+1);
        memset(dp,-1,sizeof(dp));
        int saida = change(value,0);
    
        cout << saida << endl;

    }

}    
