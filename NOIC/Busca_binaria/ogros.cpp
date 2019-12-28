#include <bits/stdc++.h>

using namespace std;
int intervalos,ogros;


struct pontos {
    int faixaMin;
    int valor;

};
int medirPontos(int key,pontos *jogadas){

    int meio;
    int inicio = 0,final = intervalos-1;
    while(inicio <= final){
        meio = (inicio+final)/2;
        if(key >= jogadas[meio].faixaMin && (meio == intervalos-1 || key < jogadas[meio+1].faixaMin)){
            return jogadas[meio].valor;
        }
        else if(key < jogadas[meio].faixaMin){
            final = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
}

int main(){

    cin >> intervalos >> ogros;
    pontos jogadas[intervalos];

    jogadas[0].faixaMin = 0;
    for (int i = 1; i < intervalos; i++)
    {
        cin >> jogadas[i].faixaMin;
    }
    for (int i = 0; i < intervalos; i++)
    {
        cin >> jogadas[i].valor;
    }
    int forca[ogros];
    for (int i = 0; i < ogros; i++)
    {
        cin >> forca[i];

    }

    for (int i = 0; i < ogros; i++)
    {
        cout << medirPontos(forca[i],jogadas);
        if(i != ogros-1)
                cout << " ";
        else
            cout << endl;
    }   
    
    
    


        
    return 0;
}