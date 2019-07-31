#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	while(cin >> x >> y){
		int vet[10001];
		for (int i = 1;i < x;i++)vet[i] = 0;
		for(int i = 0;i < y;i++){
			cin >> z;
			if(x != y){
				vet[z] = 1;
			}
		}
		if(x == y)cout << "*";
			else{
			for(int i = 1;i <= x;i++){
				if(vet[i] == 0){
					cout << i << " ";
				}	
			}
			}
	cout << "\n";
	}

	return 0;
}