#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <string> vet(10);
    vet[0].push_back("dfd");
    vet[0].push_back("erer");
    for (int i = 0; i < vet.size(); i++)
    {
        cout << vet[i] << "/";
    }
    for (int i = 0; i < vet.size(); i++)
    {
        for (int j = 0; j < vet[i].size(); j++)
        {
            cout << vet[i][j] << "/";
        }
        
    }
    


    return 0;
}