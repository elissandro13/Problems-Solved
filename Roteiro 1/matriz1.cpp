#include <iostream>
#include <cstdio>
using namespace std;


int main(){
	int N,num,dir,esq,cima,baixo,meio;
	int m[101][101];
	while(true){
		cin >> N;
		if(N==0) break;
		num = 1;
		dir = N -1;
		esq = 0;
		cima = 0;
		baixo = N - 1;
		if(N % 2 == 0){
			meio = N/2;

		}
		else {
			meio = (N+1)/2;
		}
		while(num<=meio){
			for (int i = esq; i <= dir; ++i)
			{
				m[cima][i] = num;
				m[baixo][i] = num;
			}
			for (int i = (cima + 1); i < baixo; ++i)
			{
				m[i][esq] = num;
				m[i][dir] = num;
			}
			num++;
			cima++;
			baixo--;
			esq++;
			dir--;
		}
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if(j==0)
					printf("%3d",m[i][j]);
				else printf(" %3d",m[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;


}
