#include <bits/stdc++.h>

#define MAXN 10010
using namespace std;
int h,l,color,contador,m[MAXN][MAXN];

bool vis[MAXN][MAXN] = {0};

bool validar(int i,int j,int color){
    if(i>=0 && i<h && j>=0 && j<l)
    {
        if(m[i][j]==color)
            return true;
    }
    return false;
}

void dfs(int i,int j,int color){
    vis[i][j] = true;
    contador++;
    if(validar(i-1,j,color) && !vis[i-1][j])
		dfs(i-1, j,color);
	if(validar(i,j-1,color) && !vis[i][j-1])
		dfs(i, j-1,color);
	if(validar(i+1,j,color)&& !vis[i+1][j])
		dfs(i+1, j,color);
	if(validar(i,j+1,color)&& !vis[i][j+1])
		dfs(i, j+1,color);
}
int main(){
    cin >> h >> l;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> m[i][j];
        }
    }

    int menor = INT_MAX;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if(!vis[i][j]){
                color = m[i][j];
                contador = 0;
                dfs(i,j,color);

                if(menor > contador && contador != 0){
                    menor = contador;
                }
            }
        }
    }
    cout << menor << endl;
    
    
    return 0;
}
