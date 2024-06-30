#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	int soma = 0;
	char str [20];
	float raiz;
	while(cin >> str){
		int flag = 0;
		int i = 0;
		//cout << str << "\n";
		while(str[i] != '\0'){

			if(str[i] >= 'a' && str[i] <= 'z'){
				n = str[i] - 'a' + 1;
			}
			else 
				n = str[i] - 'A' + 27;

			soma += n;
			//cout << soma << "\n";
			i++;
		 }
		// cou t << soma << "\n" << raiz << "\n";

		raiz = sqrt(soma);
		for(int i = 2;i <= raiz;i++){

			if(soma % i == 0){
				flag = 1;
				break;
			}
		}
		if(soma == 1)flag = 0;
		if(flag == 1)
			cout << "It is not a prime word.\n";
		else
			cout << "It is a prime word.\n";

		soma = 0;
		flag == 0;
	}
	return 0;
}