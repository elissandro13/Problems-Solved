#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>


using namespace std;

int p(int n) {
	while(n % 10 == 0){

        n = n / 10;

    } 

    return n % 10;
}

int main(){

    int n;
    int t = 0;
    long long int f[1000001];

    memset(f,-1,sizeof(f));

    f[0] = 1;
    f[1] = 1;

    while(cin >> n) {
        int flag = 1;
        int res = 1;
        if(f[n] != -1) {
            res = f[n];
            flag = 0;
        }
        for (int i = 2; i <= n && flag == 1; i++)
        {
            res *= i;
            while (res % 10 == 0) 
                res = res / 10;
        }
        
        f[n] = res;
        cout << "Instancia " << ++t << endl;
        cout << p(res) << endl << endl;
    }
    



    return 0;
}
