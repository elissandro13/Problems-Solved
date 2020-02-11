#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main(){
    int n;
    cin >> n;
    vector < int > v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // for (size_t i = 0; i < n; i++)
    // {
    //         cout << v[i];

    // }
    int meio = v.size()/2;
    cout << v[meio]  << "\n";
    
}