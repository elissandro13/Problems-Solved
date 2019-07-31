#include <iostream>
using namespace std;

int main(){
	int n,vez = 0;
	while(cin >> n){
		if(n == 0)
			break;
		int res = 0;
		int x,y = 0;
		char op;
		cin >> x >> op >> y;
		if(op == '+')
				res += x+y;
		else if(op == '-')
				res += x-y;
		for (int i = 1; i < n-1; ++i)
		{
			cin >> op >> x;
			if(op == '+')
				res += x;
			else if(op == '-')
				res -= x;
			//cout << res << op << "\n";
		}
		cout << "Teste " << ++vez << "\n";
		cout << res << "\n";

	}
}