#include <bits/stdc++.h>

using namespace std;
void  bubbleSort(int *vet,int n){
    int ordenado = 0;
    while (ordenado != 1)
    {
        ordenado = 1;
        for (int i = 0; i < n-1; i++)
        {
            if(vet[i] > vet[i+1]){
                int temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
                ordenado = 0; 
            }
        }
        
    }
    
}

void selectionSort(int *vet,int n){
    int lista[n];

    for(int i = 0;i < n;i++)
        lista[i] = 0;
    for (int i = 0; i < n; i++)
    {
        int menor = vet[i];
        for (int j = 0; j < n; j++)
        {
            if(lista[j] == 0 && vet[j] < menor){
                int tmp = menor;
                menor = vet[j];
                vet[j] = tmp;
            }
        }

        lista[i] = 1;
        vet[i] = menor;
        
    }
    
}

int main(){
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v,v+n);
    //bubbleSort(v,n);
    //selectionSort(v,n);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
        
    }
    
    
    return 0;
}
