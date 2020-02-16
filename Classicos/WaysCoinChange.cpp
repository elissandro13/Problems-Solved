#include <bits/stdc++.h>

using namespace std;

int dp[500010];
int coin[] = {1,5,10};
int change(int amount, int n){

    
    dp[0] = 1;
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j <= amount; j++) {  
            if (coin[i] <= j) { 
                dp[j] += dp[(j - coin[i])];  
            }   cout << dp[j] << " ";
        } 
        cout << endl;
    } 
    return dp[amount];
    

}
int main(){
 
    cout << change(12,3) << endl;

}