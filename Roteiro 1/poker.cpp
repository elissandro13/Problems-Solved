#include <iostream>
using namespace std;
void swap (int v[],int j,int iMin){
	int aux;
	aux = v[j];
	v[j] = v[iMin];
	v[iMin] = aux;

}
void ordernar(int v[],int n){
	int i,j;

	for (j = 0; j < n-1; j++)
	{
		int iMin = j;
		for (i = j+1; i < n; i++)
		{    
			if (v[i] < v[iMin])
			{
				iMin = i;
			}
		}

		if (iMin != j) 
		{
			swap(v,j,iMin);
		}
	}
}

int main(){
	int v[5],k[5];
	int vez;
	int pontos = 0;
	int turno;
	int x;
	int iguais = 0;
	cin >> vez;
	while(vez--){
		cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
		ordernar(v,5);
		for (int i = 0; i < 5; ++i)
		{
			cout << v[i] << "\n";
		}
		x = v[1]-v[0];
		if((v[4] - 4*x) == v[0] && (v[3] - 3*x) == v[0] && (v[2] - 2*x) == v[0] &&  (v[1] - x) == v[0]){
			pontos = v[0] + 200;
		}

		for (int i = 0; i < 5; ++i)
		{
				for (int j = i; j < 5; ++j)
				{
					if(v[i] == v[j])
						k[i]++;
				}
		}
			
			cout << iguais;
		}

		//cout << pontos;
		
	}
}