#include <iostream>
using namespace std;
#include <math.h>

int toInt(char c) {;
	if('0' <= c && c <= '9')
		return (int)c - '0';
	return 10 + (c - 'A');
}

char toChar(int n){
	if(0 <= n && n <= 9)
		return n + '0';
	return  'A'  + (n - 10);
}

int toBase10(string s){
	int x = 0;
	int e{0};	
	for(int i = s.length()-1;i >= 0;--i){

		x += toInt(s[i]) * pow(36,e++);
	}
	return x;

}
string toBase36(int cod){
	string p;
	while(cod > 0){

		p.insert(p.begin(), toChar(cod % 36));
		cod /= 36;
	}
	return p;

}

int main(){
	string s1,s2;
	while(cin >> s1 >> s2 && (s1 != "0" || s2 != "0" ))
		cout << toBase36(toBase10(s1) + toBase10(s2)) << "\n"; 
	return 0;
}