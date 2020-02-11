#include <bits/stdc++.h>

using namespace std;
int v[3];
bool compare(int a,int b ,int c,int x,int y,int z){
    int k[3];
    k[0] = a + x;
    k[1] = b + y;
    k[2] = z + c;
    return k[0] == v[0] && k[1] == v[1] && k[2] == v[2];
}

int main(){
    int n;
    cin >> n;
    cin >> v[0] >> v[1] >> v[2];
    int a[n][3];
    int x,y,z;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        a[i][0] = x;
        a[i][1] = y;
        a[i][2] = z;
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(compare(a[i][0],a[i][1],a[i][2],a[j][0],a[j][1],a[j][2])){
                flag = true;
                break;
            }

        }
    }
    if(flag){
        cout << "Y\n";
    } else {
        cout << "N\n";
    }
    

    return 0;
}