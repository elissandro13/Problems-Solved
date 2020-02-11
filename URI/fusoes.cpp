#include <bits/stdc++.h>

#define MAXN 100100
using namespace std;

int pai[MAXN],peso[MAXN];

int find(int x){
    if(pai[x] == x){
        return x;
    }

    return pai[x] = find(pai[x]);
}

void join(int x,int y){
    x = find(x);
    y = find(y);

    if(x == y){
        return;
    }

    if(peso[x]<peso[y]){
        pai[x]=y;
    }
    if(peso[x]>peso[y]){
        pai[y]=x;
    }

    if(peso[x]==peso[y]){

        pai[x]=y;
        peso[y]++;
    }
}

int main(){

    int n,d;
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
    {
        pai[i] = i;
        peso[i] = 1;
    }

    for (int i = 0; i < d; i++)
    {
        char op;
        int a,b;
        cin >> op >> a >> b;

        if(op == 'C'){
            if(find(a) == find(b)){
                cout << "S\n";
            } else {
                cout << "N\n";
            }
        } else if(op == 'F'){
            join(a,b);
        }

    }
    
    
    return 0;
}