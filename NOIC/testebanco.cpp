#include <cstdio> // scanf e printf

int main(){
	
	int b, n; // declaro as variáveis b e n
	
	int fundo[30]; // declaro o vetor de inteiros "fundo" com 30 posições, que guardará o dinheiros dos bancos
	
	while(true){ // repita o loop enquando "a verdade for verdade"
		
		scanf("%d %d", &b, &n); // leia os valores de b e n
		
		if(b==0 && n==0) break; // se b e n forem ambos zero, termine o loop
		
		for(int i=1; i<=b; i++) scanf("%d", &fundo[i]); // leia o valor do fundo de cada banco
		
		for(int i=1; i<=n; i++){ // para cada operação de debênture
			
			int d, c, v; // declare as variáveis inteiras d, c e b
			scanf("%d %d %d", &d, &c, &v); // leia os valores de "d", "c" e "v".
			
			fundo[d]-=v; // tire do fundo do banco devedor o valor da transferência
			fundo[c]+=v; // e adicione este valor ao fundo do banco credor
		}

        for (int i = 1; i <= b; i++)
        {
            printf("%d ", fundo[i]);
        }
		
		int ajuda=0; // declare a variável ajuda, inicializada com o valor zero
		
		for(int i=1; i<=b; i++) if(fundo[i]<0) ajuda=1; // se algum banco tiver fundo negativo, ajuda receberá 1
		
		if(ajuda==0) printf("S\n"); // se ajuda for zero, é possível tudo ser pago sem ajuda do governo
		else printf("N\n"); // caso contrário, o banco central deverá ajudar algum banco
	}
	 
	return 0;
}