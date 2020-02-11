#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int balas = 0, cri = 0;
    int total = 0;
    int resto = 0;
    int k = 0;
    while(n--){
        cin >> balas >> cri;
        resto = balas % cri;
        // cout << "resto " << resto;
        total = balas - resto;
        // cout << "balas " << total;
        k =  cri / 2;
        // cout << "k " << k;

        while(true)
        {
            if(resto <= k){
                total += resto;
                break;
            }
            resto--;
        }

        cout << total << endl;
    }
     return 0;
}