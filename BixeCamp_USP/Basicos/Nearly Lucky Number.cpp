#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>


using namespace std;

bool isLucky(int n) {
    std::string s = std::to_string(n);


    for(auto c : s) {
    
        if(c != '4' && c != '7') return false;
        
    }

    return true;
}

int main(){

    string n;

    int sete = 0;
    int quatro = 0;
    cin >> n;

    for(auto c : n) {
        if(c == '4') quatro++;
        else if (c == '7') sete++;
    }



    // s
    if(isLucky(sete+quatro)) cout << "YES" << endl;
    else {
        cout << "NO" << endl;
    }

    return 0;
}
