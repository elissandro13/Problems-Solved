#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    map <int,int> candidatos;
    int voto,maior = 0, nome = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> voto;
        candidatos[voto]++;
    }
    auto it = candidatos.begin();
    while (it != candidatos.end())
    {
        if(it->second > maior){
            maior = it-> second;
            nome = it-> first;
        }
        it++;
    }
    cout << nome << endl;

    

}