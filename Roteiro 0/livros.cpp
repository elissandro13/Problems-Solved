#include <iostream>
using namespace std;

int main(){
	int  q,d,p,total;
	while(cin>>q && q != 0){
	cin >> d;
	cin >> p;
	total = (p*d*q)/(p-q);
	if(total*q == 1)cout << total<< " pagina\n";
	else
	cout << total << " paginas\n";
	}
	return 0;
}