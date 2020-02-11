#include <bits/stdc++.h>

#define MAXN 100100
using namespace std;

int guilda[MAXN],pontos[MAXN];
int rafael;

int find(int x){
    if(guilda[x] == x){
        return x;
    }

    return guilda[x] =  find(guilda[x]);
}
void join(int x,int y){
    x = find(x);
    y = find(y);

    if(x == y)
        return;

    guilda[y] = x;
    pontos[x] += pontos[y];
    //v[x] += v[y];
    if (rafael == y) rafael = x;

}
int main(){

    int n,m;
    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }
        rafael = 1;
        int num;
        int vit = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> num;
            pontos[i] = num;
            guilda[i] = i;
            //v[i] = 0;
        }

        int op,a,b;
        for (int i = 0; i < m; i++)
        {
            cin >> op >> a >> b;
            if(op == 1){
                join(a,b);
            } else {
                a = find(a), b = find(b);
                if(pontos[a] > pontos[b]){
                        //v[a]++;
                        if(a == rafael){
                            vit++;
                        }
                } else if(pontos[b] > pontos[a]){
                    //v[b]++;
                    if(b == rafael)
                        vit++;
                }
            }
        }

        cout << vit << endl;        
    }
    return 0;
}