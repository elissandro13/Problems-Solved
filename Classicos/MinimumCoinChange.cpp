#include <bits/stdc++.h>

using namespace std;

int troco[50010];
int moedas[110];
int change(int amount, int n){

    troco[0] = 0;
    for (int i = 1; i <= amount; i++)
    {
        troco[i] = amount+1;
    }
    
    for (int i = 1; i <= amount; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            if(moedas[j] <= i){
                troco[i] = min(troco[i-moedas[j]]+1,troco[i]);
            }
        }
        
    }
    return troco[amount];
    

}
int main(){

    int value,n;
    while(cin >> value){
        if(value == 0){
            break;
        }
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> moedas[i];
        }
        sort(moedas+1,moedas+n+1);

        int saida = change(value,n);
        // {
        //     cout << troco[i] << " ";
        // }        // for (int i = 0; i <= value; i++)

        // cout << endl;
        if(saida < value+1){
            cout << saida << endl;
        } else {
            cout << "Impossivel\n";
        }
    }

}