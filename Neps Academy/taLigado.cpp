#include <bits/stdc++.h>

#define MAXN 10010
using namespace std;

bool v[MAXN][MAXN] = {0};

int main(){
    int n,m;
    cin >> n >> m;
    int x,y,c;
    int tmp;
    bool saida = false;
    vector <int> lista[100100];
    while (m--)
    {   
        cin >> c >> x >> y;
        if(x < y){
            tmp = y;
            y = x;
            x = tmp;
        }
        if(c == 0){
            //pergunta
            saida = false;
            for (int i = 0; i < lista[x].size(); i++)
            {
                if(lista[x][i] == y){
                    saida = true;
                    break;
                }
            }
            
         
            cout << saida << endl;
        } else if(c == 1){
            lista[x].push_back(y);
            lista[y].push_back(x);
        }
    }
    return 0;
}