#include <bits/stdc++.h>
using namespace std;

int n,k;
int vet[10010];;

bool ok(int num){

    int pedacos = 0;
    for (int i = 0; i < k; i++)
    {
        pedacos += vet[i]/num;
    }
    return pedacos >= n;
}

int busca(int end){
    int inicio = 1, final = end, meio = 0;
    int r = 0;
    while(inicio <= final){
        meio = (inicio+final)/2;

        if(ok(meio)){
            r = max(r,meio);
            inicio = meio + 1;
        }
        else {
            final = meio - 1;
        }
    }
    return r;
}
int main(){

    cin >> n >> k;
    int limite = 0;
    for (int i = 0; i < k; i++)
    {
        cin >> vet[i];
        limite = max(limite,vet[i]);
    }
    cout << busca(limite) << "\n";

    


    return 0;
}