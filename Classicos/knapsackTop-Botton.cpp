#include <bits/stdc++.h>

using namespace std; 

int peso,item;
int w[10010],v[10010];
int dp[10010][10010];

int solve(int item,int peso){
    if(item == 0 || peso == 0) return 0;

    if(dp[item][peso] != -1) return dp[item][peso];

    if(w[item-1] > peso)
        return solve(item-1,peso);
    else {
        return dp[item][peso] = max(solve(item-1,peso),v[item-1]+solve(item-1,peso-w[item-1]));
    }

    return dp[item][peso];
}   

vector<int> ans;

int main(){

    cin >> peso >> item;
    for (int i = 0; i < item; i++)
    {
        cin >> w[i] >> v[i];
    }
    
    for (int i = 0; i <= item; i++)
    {
        for (int j = 0; j <= peso; j++)
        {
            dp[i][j] = -1;
        }
        
    }
    
    cout << solve(item,peso) << endl;
    return 0;
}
