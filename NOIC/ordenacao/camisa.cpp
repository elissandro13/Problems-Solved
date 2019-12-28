#include <bits/stdc++.h>
using namespace std;

vector<string> nomes,cor,tamanho;
vector<int> ordem;

bool ordena(int x,int y){
    if(cor[x] != cor[y]) return cor[x] < cor[y];

    else if(tamanho[x] != tamanho[y]) return tamanho[x] > tamanho[y];
    else
        return nomes[x] < nomes[y];


}
int main(){
    int t;
    cin >> t;
    while(true){
        cin.ignore();
        if(t == 0)break;
    
            nomes.resize(t);
            cor.resize(t);
            tamanho.resize(t);
            ordem.resize(t);
            for (int i = 0; i < t; i++)
            {
                getline(cin,nomes[i]);
                cin >> cor[i] >> tamanho[i];
                cin.ignore();
                ordem[i] = i;
        
            }
            stable_sort(ordem.begin(),ordem.end(),ordena);
            for (int i = 0; i < t; i++)
            {
                cout << cor[ordem[i]] << " " << tamanho[ordem[i]]<< " " << nomes[ordem[i]] << "\n";
    
            }
            cin >> t;
            if(t != 0)
                cout << endl;
            nomes.clear();
            cor.clear();
            tamanho.clear();
            ordem.clear();
            
            
        
    }
    return 0;
}