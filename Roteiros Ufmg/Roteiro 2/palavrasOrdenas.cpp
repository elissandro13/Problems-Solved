#include <iostream>
#include <string>
using namespace std;

string comparar(string s){
    int j = 1;
    for (int i = 0 ; i < s.size()-1; i++)
    {
        if(tolower(s[i]) >= tolower(s[j++])){
            return "N";
        }
        
    }
    return "O";
    
}

int main()
{
    int n;
    cin >> n;
    
    while (n--)
    {
        string s;
        cin >> s;
        cout << s << ": " << comparar(s) << "\n";
    }
    
    return 0;
}
