#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int min = 0 ,h = 0;
    int final = 0;
    while(n--){
        cin >> h >> min;
        h *= 60;
        final = 24*60 - h - min;
        cout << final << endl;
    }
     return 0;
}