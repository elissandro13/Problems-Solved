#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <set>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        set<string>aliens;
        while(n--){
        string dna;
        cin >> dna;
        sort(dna.begin(),dna.end());
        aliens.insert(dna);
        }      
        cout << aliens.size() << endl;
    }
}




