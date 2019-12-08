#include <bits/stdc++.h>

using namespace std;


int main(){
    int x,y,a,b;
    cin >> x >> y >> a >> b;
    vector < pair <int,int> > comb;

    for (int i = a; i <= x; i++)
    {
        for (int j = b; j <=  min(y,i-1); j++)
        {
            pair <int,int> p(i,j);
            comb.push_back(p);
        }
        
    }
    cout << comb.size() << "\n";
    for (size_t i = 0; i < comb.size(); i++)
    {
        cout << comb[i].first << " " << comb[i].second << "\n";
    }
    
    
    return 0;

}