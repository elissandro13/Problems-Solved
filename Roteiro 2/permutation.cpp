#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    while (cin >> n)
    {
        if(n == 0)
            break;
        vector < int > v(n);
        for (size_t i = 0; i < n; i++)
            scanf("%d",&v[i]);
        
        sort(v.begin(),v.end());
         
        do {
            for (size_t i = 0; i < n; i++)
                printf("%d ",v[i]);
            printf("\n");
            

        } while(next_permutation(v.begin(),v.end()));
        
        
        
    }
    
}