#include <bits/stdc++.h>

using namespace std;
int vet[100010];
int n,c;
bool test(int num){
    int cow = 1;
    int a = vet[0];
    for (int i = 0; i < n; i++)
    {
        if(vet[i]-a >= num){
            cow++;

            if(cow==c)
                return true;
            
            a = vet[i];

        }
    }
    return false;

}

int main(){

    int t;
    cin >> t;
    while(t--){
        cin >> n >> c;
        for (int i = 0; i < n; i++)
        {
            cin >> vet[i];
        }
        sort(vet,vet+n);
        

        int begin = 0,end = 0,mid = 0;
        begin = 0;
        end =  vet[n-1];
        while(begin < end){
            mid = (begin + end)/2;
            if(test(mid)){
                begin = mid+1;
            }
            else {
                end = mid;
            }
        }
        cout << begin-1 << "\n";      
    }
    return 0;
}