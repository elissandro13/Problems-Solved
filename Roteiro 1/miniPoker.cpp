#include <iostream>
using namespace std;


int main(){
	int n;
	int vez = 0;
	cin >> n;
	while(n--){
		int v[15];
		int x,c = 0;
		int pontos = 0;
		int posTrinca = 0,posQuadra = 0,quadra = 0,trinca = 0,temDupla = 0,quinta = 0,posQuinta = 0, posDupla2 = 0, posDupla = 0;
		for (int i = 0; i < 15; ++i)
		{
			v[i] = 0;
			
		}
		for (int i = 0; i < 5; ++i)
		{
			cin >> x;
			v[x]++;
		}
		// for (int i = 0; i < 5; ++i)
		// {
		// 	cout << "V[" << i << "]: " << v[i]; 
		
		// }
		// cout << "\n";
		for (int i = 0; i < 15; ++i)
		{
			if(v[i] > 0){
				c++;
			}
			if(v[i] == 4){
				quadra = 1;
				posQuadra = i;
			}
			if(v[i] == 3){
				posTrinca = i;
				trinca  = 1;
			}
			if(v[i] == 2 && temDupla == 0){
				posDupla2 = i;
				temDupla = 1;
			}
			else if(v[i] == 2 && temDupla == 1){
				posDupla = i;
			}
			if(v[i] == 1 && v[i-1] == 1 && v[i-2] == 1 & v[i-3] == 1 && v[i-4] == 1){
				quinta = 1;
				posQuinta = i-4;
			} 
		}
		// cout << "C: " << c << "\n";
		// cout << "PosD: " << posDupla2 << "\n";
		if(c == 2){
			if(quadra == 1)
				pontos = posQuadra + 180;
			else {
				pontos = posTrinca + 160;
			}
		}
		else if(c == 3){
			if(trinca == 1){
				pontos = 140+posTrinca;
			}
			else {
				pontos = 3*posDupla + 2*posDupla2 + 20;
			}
		}
		else if(c == 4){
			pontos = posDupla2;

		}
		else if(c == 5){
			if(quinta == 1){
				pontos = posQuinta + 200;
			}
			else {
				pontos = 0;
			}

		}
		cout << "Teste " << ++vez << "\n" << pontos << "\n\n";

	}
} 