#include <iostream>
using namespace std;

int main(){
	int vez = 0,x;
	cin >> x;
	while(x != 0){
		vez++;
		char nome1[11],nome2[11];
		cin >> nome1;
		cin >> nome2;
		cout << "Teste " << vez << "\n";
		for(int i = 0;i < x;i++){
			int n1,n2;
			cin >> n1;
			cin >> n2;
			if((n1+n2)%2 == 0){
				cout << nome1 << "\n";
			}
			else {
				cout << nome2 << "\n";
			}
		}
		cout << "\n";


		cin >> x;
	}


	return 0;
}