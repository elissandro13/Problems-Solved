#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
#define MAXT 100005
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    
    int A[MAXT];
    for(int i = 0;i<n;i++) scanf("%d",&A[i]);
    
    int resp=0;
    int B[MAXT];
    int tamb = 0;
    B[0] = A[0];
    
    for(int i = 0;i<n;i++){
        tamb++;
        for(int j = tamb;j>=1;j--){
            if(A[i] < B[j]){
                B[j+1] = B[j];
                resp++;
            }
            if(A[i] > B[j]){
                B[j+1] = A[i];
                break;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << " ";
    }
    
    
    return 0;
}