
#include <bits/stdc++.h>


using namespace std;


int main() {

    int a,v;
    map<int, int> grau;
    int test = 0;
    while(cin >> a >> v && a != 0 && v != 0) {

        int maior = 0;
        int maior_p = 0;
        for (int i = 0; i < 110; i++) {
            grau[i] = 0;
        }


        while(v--) {
            int x, y;
            cin >> x >> y;
            grau[x]++;
            grau[y]++;

            if(grau[x] > maior) {
                maior = grau[x];
                maior_p = x;
            }

            if(grau[y] > maior) {
                maior = grau[y];
                maior_p = y;
            }
        }

        
        cout << "Teste " << ++test  << endl;
        int i = 0;
        int k = 0;
        while (i <= a){

            if(grau[i] == maior) {
                if (k == 0) {
                    cout << i;
                    k++;
                }
                else cout << " " << i;
            }
            i++;
            
        }
        cout << endl << endl;
    }
    return 0;
}