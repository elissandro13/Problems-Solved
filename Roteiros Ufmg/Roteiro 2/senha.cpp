#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,count = 0;
    int vet[10];
    char senha;
    int banco[6][10];
    while (cin >> n)
    {
        int x = n ;
        if(n == 0)
            break;
        for (size_t i = 0; i < 6; i++)
                for (size_t j = 0; j < 10; j++)               
                   banco[i][j] = 0;
        while(n--){
            for (size_t i = 0; i < 10; i++)
            {
                cin >> vet[i];
            }
                

           

            for (size_t i = 0; i < 6; i++)
            {
                cin >> senha;
                //cout << senha;

                if(senha == 'A'){
                    banco[i][vet[0]]++;
                    banco[i][vet[1]]++;
                }
                else if(senha == 'B'){
                    banco[i][vet[2]]++;
                    banco[i][vet[3]]++;
                }
                else if(senha == 'C'){
                    banco[i][vet[4]]++;
                    banco[i][vet[5]]++;
                }
                else if(senha == 'D'){
                    banco[i][vet[6]]++;
                    banco[i][vet[7]]++;
                }
                else if(senha == 'E'){
                    banco[i][vet[8]]++;
                    banco[i][vet[9]]++;
                }
            }
            
        }
        cout << "Teste " << ++count << "\n";
        for (size_t i = 0; i < 6; i++)
        {
                for (size_t j = 0; j < 10; j++)
                {
                   if(banco[i][j] == x){
                       cout << j << " ";
                   }
                }
                
        }
        cout << "\n\n";
        
        
        

    }
    
    return 0;
}