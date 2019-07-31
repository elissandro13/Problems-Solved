#include <iostream>
using namespace std;

int main(){

	int n,ciclo = 0,safe = 0;
	char m[501][501];
	cin >> n;
	for(int i = 0; i < n;i++){
		for (int j = 0; j < n; ++j)
		{
			cin >> m[i][j];
		}

	}
	for(int i = 0;i < n;i++){
		for (int j = 0; j < n; ++j)
		{ 
			ciclo = 0;
			int l = i;
			int c = j;
			int flag = 0;
			while(ciclo <= n*n){
				if(m[l][c] == '*'){
					break;
				}
				else {
				switch (m[l][c]) {
					  case 'A': l--; break;
					  case '<': c--; break;
					  case '>': c++; break;
					  case 'V': l++; break;
  				}
				}

				if(l < 0 || l >= n || c < 0 || c >= n){
					flag = 1;
					break;
				}
				ciclo ++;				
				
			}
			if(flag == 0){
				safe++;
				m[l][c] = '*';
			}

		}


	}
	cout << safe << "\n";
	return 0;

}