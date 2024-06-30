#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

 int binarySearch(int arr[],int inicio,int fim,int x) 
{ 
    if (fim >= inicio) { 
        int mid = (inicio + fim)/ 2; 
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, inicio, mid - 1, x); 
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, fim, x); 
    } 
    // We reach here when element is not 
    // present in array 
    return -1; 
} 

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int vet[n];
    for (size_t i = 0; i < n; i++)
    {
       scanf("%d",&vet[i]);
    }
    while(q--){
        int x;
        scanf("%d",&x);
        if(binarySearch(vet,0,n -1,x) == -1){
            printf("%d", -1);
        }
        else {
            vector<int>v(vet,vet+n);
            vector<int>::iterator upper;
            upper = lower_bound(v.begin(), v.end(), x);
            cout << upper - v.begin() << "\n";
        }
        
    }
    return 0;
    
}