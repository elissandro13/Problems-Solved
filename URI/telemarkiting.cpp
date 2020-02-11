#include <cstdio>
#include <queue>

#define MAXN 1010
#define MAXL 1000100

using namespace std;

int n, l, t, qtd[MAXN];

struct atendente{ // declaro a struct atendente
	
	int id, livre; // ela terá dois inteiros como membros
	
	// terá um construtor para atribuir valores aos membros
	atendente(int id_, int livre_=0){ id=id_; livre=livre_; } 
	
	// terá também um operador >, para compará-la com outro atendente

	// note que a priority_queue ordena do maior para o menor
	// logo este operador deve retornar true se a struct vem antes na ordenação
	bool operator >(const atendente x) const{
		
		// se eles ficarem livres em momentos diferentes
		if(livre!=x.livre) return livre<x.livre; // ele retorna o que fica livre antes
		return id<x.id; // caso contrário, retorna o de menor id
	}
	
	// crio também o operador < de maneira análoga ao >
	bool operator <(const atendente x) const{
		
		if(livre!=x.livre) return livre>x.livre;
		return id>x.id;
	}
};

priority_queue<atendente> heap; // crio a priority_queue de atendente de nome "heap"

int main(){
	
	scanf("%d %d", &n, &l); // leio os valores de n e l
	
	for(int i=1; i<=n; i++) heap.push(atendente(i)); // insiro os atendentes na fila de prioridade
	
	int tempo=0; // inicializo tempo com o valor 0
	
	for(int i=1; i<=l; i++){ // para cada ligação
		
		scanf("%d", &t); // leio sua duração
		
		atendente davez=heap.top(); // e vejo qual o atendente que irá atendê-la (o primeiro de heap)
		
		heap.pop(); // tiro ele do topo
		qtd[davez.id]++; // e aumento a quantidade de ligações por ele atendidas
		
		if(davez.livre>tempo) tempo=davez.livre; // se a ligação teve que esperar, atualizo o tempo
		
		davez.livre+=t; // salvo que o atendente davez só ficará livre novamente em t minutos
		heap.push(davez); // e o reinsiro na fila de prioridade
	}
	
	// depois, para cada um dos atendentes, imprimo sua identificação e a quantidade de ligações atendidas
	for(int i=1; i<=n; i++) printf("%d %d\n", i, qtd[i]); 
	
	return 0;
}