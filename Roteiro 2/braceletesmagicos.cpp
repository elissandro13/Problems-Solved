#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;


string aumentar( string s3){
    string s4 = s3;
    for (int i = 0; i < s3.size(); i++)
    {
        s4.push_back(s3[i]);
    }
    return s4;
    
}

int main() {
    int n;
    cin >> n;
    while(n--){
        string s1,s2,s3;
        cin >> s1 >> s3;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        //cout << s2 << "\n";
        s3 = aumentar(s3);
        //cout << s3 << "\n";
        if(s3.find(s1) != string::npos  || s3.find(s2) != string::npos ){
            cout << "S\n";
        }
        else {
            cout << "N\n";
        }

    }
}