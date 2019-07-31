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
		for (int i = esq; i <= dir; ++i)
		{

			m[cima][i] = num+i;
			m[baixo][i] = N-i;
		}
		for (int i = (cima + 1); i < baixo; ++i)
		{
			m[i][esq] = num+i;
			m[i][dir] = N-i;
		}
		cima++;
		baixo--;
		esq++;
		dir--;
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
