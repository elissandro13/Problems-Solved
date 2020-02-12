#include <bits/stdc++.h>

using namespace std;
int item,peso;
int vetorPesos[10010];
int vetorValor[100100];
int tabela[10010][10010];
int solve(int item,int peso){
    for (int i = 1; i <= item; i++)
    {
        for (int j = 1; j <= peso; j++)
        {
            if(vetorPesos[i-1] <= j){
                tabela[i][j] = max((vetorValor[i-1] + tabela[i-1][j - vetorPesos[i-1]]), (tabela[i-1][j]));
            } else {
                tabela[i][j] = tabela[i-1][j];
            }
        }
        
    }
    
    return tabela[item][peso];
    
}
int main(){
    cin >> peso >> item;
    for (int i = 0; i < item; i++)
    {
        cin >> vetorPesos[i] >> vetorValor[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 7; j++)
        {
            tabela[i][j] = 0;
        }        
    }
    
    cout << solve(item,peso) << endl;
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 7; j++)
    //     {
    //         cout << tabela[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}