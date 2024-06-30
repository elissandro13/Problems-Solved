#include <iostream>


using namespace std;

int main(){

    int n;

    int cont = 0;

    while(cin >> n) {
        int gan = 0;
        int x;
        
        if(n == 0) break;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            //cout << x << "-" << i << endl;
            if(x == i) {
                gan = i;
            }
        }
            
        

        cout << "Teste " << ++cont << endl << endl;
        cout << gan << endl;
        
        
    }


    return 0;
}