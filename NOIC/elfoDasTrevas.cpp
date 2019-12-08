#include <bits/stdc++.h>
using namespace std;

vector<string> renas;
vector<int> peso,idade;
vector<double> altura;
vector<int> ordem;

bool ordena(int x,int y){
    if(peso[x] != peso[y]) return peso[x] > peso[y];

    else if(idade[x] != idade[y]) return idade[x] < idade[y];

    else if(altura[x] != altura[y]) return altura[x] < altura[y];
    else
        return renas[x] < renas[y];


}
int main(){
    int t;
    int cont = 1;
    cin >> t;
    while(t--){        
        int n,m;
        cin >> n >> m;
        renas.resize(n);
        peso.resize(n);
        idade.resize(n);
        altura.resize(n);
        ordem.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> renas[i] >> peso[i] >> idade[i] >> altura[i];
            ordem[i] = i;
    
        }
        sort(ordem.begin(),ordem.end(),ordena);
        printf("CENARIO {%d}\n",cont++);
        for (int i = 0; i < m; i++)
        {
            cout << i+1 << " - " << renas[ordem[i]] << "\n";
 
        }
        renas.clear();
        peso.clear();
        idade.clear();
        altura.clear();
        ordem.clear();
        
          
    }
    
    return 0;
}