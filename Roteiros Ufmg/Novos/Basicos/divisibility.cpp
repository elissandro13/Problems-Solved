#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cin >> n;

  
    while(n--) {
        int a,b;
        cin >> a >> b;
        
        int resto = a % b;
        if(resto == 0) {cout << 0; continue;}
        cout << b - resto << endl;
    }



    return 0;
}
