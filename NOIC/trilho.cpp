#include <bits/stdc++.h>
using namespace std;
int entrada[10000];
int main() {

    int n = 0;
    while(cin >> n){

        if(n == 0)
            break;
        while(true){


            bool certo = true;
            bool sair = false;

            
            stack<int> estacao;
            stack<int> estacao_chegada;
            stack<int> esperando;
            for (int i = 1; i <= n; i++)
            {
                cin >> entrada[i];
                if(entrada[i] == 0){
                    sair = true;
                    break;
                }
                estacao.push(entrada[i]);
                estacao_chegada.push(i);
                
            }
            if(sair){
                break;
            }
            if(!sair){
                esperando.push(estacao.top());
                estacao.pop();
                for (int i = 1; i <= n; i++)
                {
                    
                    while (esperando.top() != estacao_chegada.top() && !estacao.empty()){
                            esperando.push(estacao.top());
                            estacao.pop();
                    }
                    if(estacao_chegada.empty()){
                        break;
                    }
                    else if(esperando.top() == estacao_chegada.top()){
                        esperando.pop();
                        estacao_chegada.pop();
                    } else {
                        certo = false;
                        cout << "No\n";
                        break;
                    }

                }
                if(certo)
                    cout << "Yes\n";
            
            }
        }
            cout << "\n";
    }   

    return 0;
}