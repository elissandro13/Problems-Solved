#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <utility>

using namespace std;


int main(){
    int n;
    int result = 0;
    cin >> n;
    int a[n],b[n],c[n],d[n];
    int s1[n*n],s2[n*n],pos = 0;

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
       for (size_t j = 0; j < n; j++)
       {
           s1[pos] = a[i] + b[j];
           s2[pos++] = c[i] + d[j];

       }
    } 
    sort(s1,s1+pos);
    sort(s2,s2+pos);

    vector<int> v1(s1,s1+pos);
    vector<int> v2(s2,s2+pos);

    
   for (size_t i = 0; i < pos; i++)
   {

        int num = (v1[i]*-1);
        if(binary_search(v2.begin(),v2.end(),num)){
            auto l = lower_bound(v2.begin(),v2.end(),num);
            auto u = upper_bound(v2.begin(),v2.end(),num);
            result += u - l;
        }
       
   }
   cout << result << endl;
   
       
   
    
    
}