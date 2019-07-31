#include <iostream>
using namespace std;

int main(){
	int n,m,s;
	while(cin >> n >> m >> s){
		if(n == m && m == s && s == 0)
			break;
		int dx[] = {-1, 0, 1, 0};
		int dy[] = {0, 1, 0, -1};
		char campo[n+1][m+1];
		int cont = 0,x = 0,y = y;
		int action = 0;
		char act[s],t;
		int pontos = 0;
		char ref[4] = {'N', 'L', 'S', 'O'};
		int d;

		//leitura inicial
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> campo[i][j]; 
			}
			
		}
		//achar pos inicial e direção
		for (int i = 0; i < n; ++i)
		{
			for (int j= 0; j < m; ++j)
			{
				if(campo[i][j] == 'N'){
					x = i;
					y = j;
					d = 0;
					break;

				}
				else if(campo[i][j] == 'S'){
					x = i;
					y = j;
					d = 2;
					break;
				}
				else if(campo[i][j] == 'L'){
					x = i;
					y = j;
					d = 1;
					break;
				}
				else if(campo[i][j] == 'O'){
					x = i;
					y = j;
					d = 3;
					break;
				}
			}
		}
		//ler açoes
		for (int i = 0; i < s; ++i)
		{
			cin >> act[i];
		}

		while(action < s){
			if(act[action] == 'D'){
				d = (d + 1)% 4;
			}
			else if(act[action] == 'E'){
				d = (d + 3)% 4;
			}
			else if(x + dx[d] != n && y + dy[d] != m && x + dx[d] >= 0 && y+ dy[d] >= 0){
				t = campo[x+dx[d]][y+dy[d]];
				if (t != '#') {
                    campo[x][y] = '.';
                    if(t == '*')
                        pontos++;
                    x += dx[d], y += dy[d];
                }
			}
			action++;
		}

		cout << pontos << "\n";
	}
	return 0;
}