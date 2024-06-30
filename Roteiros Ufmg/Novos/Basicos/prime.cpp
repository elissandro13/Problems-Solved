#include <iostream>
#include <math.h>

using namespace std;

bool primo(int n) {
	double sqroot = sqrt(n);
	for(int i = 2; i <= n; i++){
        	if(n % i == 0) return false;
    }

	return true;
}

int main(){

    int n;
    cin >> n;

    while(n--) {
        int x;
        cin >> x;
        if(primo(x)) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    



    return 0;
}
