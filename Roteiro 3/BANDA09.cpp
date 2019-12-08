#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    int a,b,c;
    int x,y,z;
    int maior = 0;
    a = 1;
    b = 2;
    c = 3;
    vector < vector <int>> v;
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        v[i].resize(n,0);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        v[x-1][y-1] = v[y-1][x-1] = z;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if(v[i][j] + v[i][k] + v[j][k] > maior){
                    maior = v[i][j] + v[i][k] + v[j][k];
                    a = i + 1;
                    b = j + 1;
                    c = k + 1;
                }
            }
            
        }
        
    }

    cout << a << ' ' << b << ' ' << c << "\n";
    return 0;
    
    
}