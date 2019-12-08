#include <bits/stdc++.h>

using namespace std;
int m[7][8];
bool mark[7][8], used[29];
int v[] = {1,7,12,16,19,21,22};
int foundValue(int a,int b){
    if (a > b)swap(a,b);
    return v[a] + b;
}
int backtrack(int i,int j){
    int num = 0,piece;
    if(i >= 7){
        return 1;
    }
    if(j >= 8){
        return backtrack(i+1,0);
    }
    if(mark[i][j]) return backtrack(i, j+1);
    if(j < 7 && !used[piece = foundValue(m[i][j],m[i][j+1])] && !mark[i][j+1]){
        mark[i][j] = mark[i][j+1] = used[piece] = true;
        num += backtrack(i,j+2);
        mark[i][j] = mark[i][j+1] = used[piece] = false;
    }
    if(i < 6 && !used[piece = foundValue(m[i+1][j],m[i][j])] && !mark[i+1][j]){
        mark[i+1][j] = mark[i][j] = used[piece] = true;
        num += backtrack(i,j+1);
        mark[i+1][j] = mark[i][j] = used[piece] = false;
    }
    return num;
}
int main(){
    int t;
    cin >> t;
    int turn = 0;
    while(t--){
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                scanf("%d",&m[i][j]);
            }
            
        }
        memset(mark,0,sizeof(mark));
        memset(used,0,sizeof(used));
        cout << "Teste  "<<++ turn << "\n" << backtrack(0,0) << "\n"; 
        

    }
    return 0;
}