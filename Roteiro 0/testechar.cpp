#include <iostream>
using namespace std;

char toChar(int n){
	if(n >= 0 && n<= 9)
		return n + '0';
	else
		return  'A' + n;
}
int main(){

	int  s;
	cin >> s;
	cout << (int)'b';
	cout << toChar(s);
}