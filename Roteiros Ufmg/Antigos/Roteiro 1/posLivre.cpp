#include <iostream>
using namespace std;

int main(){
	int n,h,w;
	while(cin >> w >> h >> n){
		if(h == 0 && w == 0 && n == 0){
			break;
		}
		int cont = 0;
		bool m[w+1][h+1];
		for (int i = 1; i <= w; ++i)
		{
			for (int j = 1; j <= h; ++j)
			{
				m[i][j] = true;	
			}
		}
		for (int i = 0; i < n; ++i)
		{
			int x1,x2,y1,y2,temp;
			cin >> x1 >> y1 >> x2 >> y2;
			if(x1 > x2){
				temp = x1;
				x1 = x2;
				x2 = temp;
			}
			if(y1 > y2){
				temp = y1;
				y1 = y2;
				y2 = temp;
			}
			for (int i = x1; i <= x2; ++i)
			{
				for (int j = y1; j <= y2; ++j)
				{
					m[i][j] = false;
				}
			}
		}
		for (int i = 1; i <= w; ++i)
		{
			for (int j = 1; j <= h; ++j)
			{
				if(m[i][j]){
					cont++;
				}
			}
		}
		if(cont == 0){
			cout << "There is no empty spots.\n";

		}
		else if(cont == 1){
			cout << "There is one empty spot.\n";

		}
		else {
			cout << "There are "<< cont <<" empty spots.\n";
		}

	}
}