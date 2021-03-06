#include <bits/stdc++.h>

using namespace std;

int v[10010][10010] = {0};
int contador = 0;
int n,m;

bool isInside(int i,int j){
    if(i >= 1 && i <= n && j >= 1 && j <= m){
        if(v[i][j] == 0){
            return true;
        } else {
            return false;
        }
    }
    return false;
}
void floydFill(int i,int j){
    v[i][j] = 2;
    if(isInside(i,j+1)){
        contador++;
        floydFill(i,j+1);
    }
    if(isInside(i+1,j+1)){
        contador++;
        floydFill(i+1,j+1);
    }
    if(isInside(i+1,j)){
        contador++;
        floydFill(i+1,j);
    }
    if(isInside(i,j-1)){
        contador++;
        floydFill(i,j-1);
    }
    if(isInside(i-1,j-1)){
        contador++;
        floydFill(i-1,j-1);
    }
    if(isInside(i-1,j)){
        contador++;
        floydFill(i-1,j);
    }
    if(isInside(i-1,j+1)){
        contador++;
        floydFill(i-1,j+1);
    }
    if(isInside(i+1,j-1)){
        contador++;
        floydFill(i+1,j-1);
    }

}
int main(){

    int x,y,k,a,b;
    cin >> n >> m >> x >> y >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        v[a][b] = 2;
    }

    floydFill(x,y);
    cout << contador+1 << endl;
    
    return 0;
}