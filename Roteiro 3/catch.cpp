
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        long long int t;
        cin >> t;
        if(t % 3 == 0)
            cout << t / 3;
        else 
            cout << "0";
        cout << "\n";
    } 
}