#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>


using namespace std;


int main(){

    string s;

    int n;

    int c = 0;

    cin >> n;

    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        
        if(s[i] == s[i+1]) {
            c++;
        }
    }

    cout << c << endl;
 
    return 0;
}
