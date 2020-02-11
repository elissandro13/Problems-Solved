#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
        set<int> ana;
        int anaVet[a],beaVet[b];
        set<int> bea;
        int x;
        for (int i = 0; i < a; i++)
        {
            cin >> x;
            ana.insert(x);
            if(ana.find(x) == ana.end())
                anaVet[i] = x;
        }
        for (int i = 0; i < b; i++)
        {
            cin >> x;
            bea.insert(x);
            beaVet[i] = x;
            if(bea.find(x) == bea.end())
                beaVet[i] = x;
            
        }
        int contA = 0;
        int contB = 0;
        for (int i = 0; i < a; i++)
        {
            if(bea.find(anaVet[i]) == bea.end()) contA++;
        }
        for (int i = 0; i < b; i++)
        {
            if(ana.find(beaVet[i]) == ana.end()) contB++;
        }
        cout << min(contA,contB) << endl;
        
        
        
    }
    return 0;
}