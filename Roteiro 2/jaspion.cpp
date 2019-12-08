#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int m,n;
        cin  >> m >> n;
        cin.ignore(1);
        string word,meaning;
        map <string,string> dict;
        for (int i = 0; i < m; i++)
        {
            getline(cin,word);
            getline(cin,meaning);
            dict[word] = meaning;
        }
        for (int i = 0; i < n; i++)
        {
            string temp;
            getline(cin,temp);
            istringstream x(temp);
            while(x >> temp){
                if(dict.find(temp) != dict.end()){
                    cout << dict[temp] << " ";
                }
                else {
                    cout << temp << " ";
                }
            }
            cout << "\n";                                 
        }
    }
    cout << "\n";          
    return 0;
    
}