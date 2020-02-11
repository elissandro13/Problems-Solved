#include <bits/stdc++.h>

using namespace std;
#define MAXN 10010
int m,n,k;
long long int dp[MAXN],a[MAXN];

int func(int x){
    if(dp[x] != -1)
        return dp[x];
    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = (sum+a[i]*func(x-i)) % m;
    }
    

    return dp[x] = sum;
}
int main(){
    cin >> n >> k >> m;
    memset(dp,-1,sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> dp[i];
    }

    cout << func(k) << endl;
    

    return 0;
}