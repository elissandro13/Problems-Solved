#include <bits/stdc++.h>

using namespace std;
int n,k;
string s;

int solve(char key){
    int ret,cont,r;
    ret = cont = r = 0;

    for (int l = 0; l < n; l++)
    {
        while(r < n && (cont < k || s[r] != key)){

            if(s[r] == key)
                cont++;

            r++;
        }

        if(s[l] == key)
            cont--;
        
        ret = max(ret,r-l);
    }
    

    return ret;
}
int main(){

    cin >> n >> k >> s;

    cout << max(solve('a'),solve('b')) << endl;
    return 0;
}