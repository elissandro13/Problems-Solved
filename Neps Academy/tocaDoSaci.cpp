#include <bits/stdc++.h>
#define MAXN 11111

using namespace std;

int n,m;
int t[10010][10010],x,y,contador;

bool v[MAXN][MAXN] = {0};
void dfs(int i,int j){
    v[i][j] = true;
    //t[i][j] = 4;
    contador++;
    if(i+1 < n && !v[i+1][j] && t[i+1][j] == 1){
        dfs(i+1,j);

    }
    else if(j+1 < m && !v[i][j+1] && t[i][j+1] == 1){
        dfs(i,j+1);

    }
    else if(i-1 >= 0 && !v[i-1][j] && t[i-1][j] == 1){
        dfs(i-1,j);

    }
    else if(j-1 >= 0 && !v[i][j-1] && t[i][j-1] == 1){
        dfs(i,j-1);

    }
    return;
}

int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&t[i][j]);
            if(t[i][j] == 3){
                x = i;
                y = j;
            }
        }
        
    }
    //cout << "<<<<<<<<<" << x << y << endl;
    contador = 1;
    dfs(x,y);

    cout << contador << endl;


    
    return 0;
}