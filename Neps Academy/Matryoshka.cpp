#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int vet[n],copy[n];
    for(int i = 0;i < n;i++){
        cin >> vet[i];
        copy[i] = vet[i];
    }
    sort(vet,vet+n);
    int cont = 0;
    vector <int> num;
    for (int i = 0; i < n; i++)
    {
        if(vet[i] != copy[i]){
            cont++;
            num.push_back(vet[i]);
        }
    }
    sort(num.begin(),num.end());
    cout << cont << "\n";
    if(cont > 0){

        for (int i = 0; i < num.size(); i++)
        {
            cout << num[i];
            if(i < num.size()-1)
                cout << " ";
        }
    }
    
    
    return 0;
}