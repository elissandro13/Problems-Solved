#include <bits/stdc++.h>

using namespace std; 

int peso,item;
int w[10010],v[10010];
int dp[10010][10010];

vector<int> resposta;

const int INF = 0x3f3f3f3f;

int solve(int index,int cap){
    
    if(cap < 0)return -INF;
    if(index == item) return 0;

    int& pdm = dp[index][cap];
    if(pdm!=-1) return pdm;

    return pdm = max(solve(index+1, cap), v[index] + solve(index+1, cap - w[index]) );
}   


void recover(int ind,int cap){
    
    if(item == ind) return;
    int pega = v[ind] + solve(item+1,cap-w[ind]);
    int passa = solve(item+1,cap);
    if(pega >= passa){
        resposta.push_back(ind);
        solve(item+1,cap-w[ind]);

    }
    recover(ind+1,cap);
}
int main(){

    cin >> peso >> item;
    for (int i = 0; i < item; i++)
    {
        cin >> w[i] >> v[i];
    }
    
    memset(dp,-1,sizeof(dp));
    
    cout << solve(0,peso) << endl;
    recover(0,peso);
    for (auto i : resposta)
    {
        cout << i << " ";
    }
    
    

    return 0;
}
