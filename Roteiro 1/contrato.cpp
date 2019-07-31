#include <iostream>
using namespace std;
#include <string.h>

// int ToInt(char a){
// 	return a - '0';
// }

void zero (int j,char g[1002]) {
	int k = 0;
	int flag = 0;
	for (int i = 0; i < j ; ++i){
		if(g[i] != '0' && g[i-1] == '0'){
			k = i;
			flag = 1;
		}
	}
	if (flag == 0) 
		cout << 0;
	else {
		for (int i = k; i < strlen(g); ++i){
			cout << g[i];
		}
	}

}

void analisar(char c,char p[1002],int size){
	char g[1002];
	int flag = 0;
	int j{0};
	for (int i = 0; i < size; ++i){

				if(p[i] != c){
					g[j++] = p[i];
					flag = 1;
				}
			}
	if (flag == 0){
		cout << 0;
		cout << "\n";
	}
	else if(g[0] == '0' && strlen(g) > 1){
		zero(j,g);
		cout << "\n";
	} 
	else {
		for (int i = 0; i < j; ++i){
			cout << (g[i]);
		}
			cout << "\n";
	}

} 

int main (){

	char c;
	char p[1002];
	while(cin >> c){
		if(c == '0')
			break;
		cin >> p;
		int size =  0;
		size = strlen(p);
		analisar(c,p,size);

	}
}