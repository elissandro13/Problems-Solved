#include <iostream>
#include <cstdio>
using namespace std;
int i = 0;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) 
{  
    i++;
    if (n == 1) 
    { 
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod); 
        return; 
    } 
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod); 
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod); 
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod); 
} 
  
int main() 
{ 
    int n,vez = 0;
    while(cin >> n && n != 0){
        i = 0;
        towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods 
        cout <<  "Teste " << ++vez << i << "\n";
    }
    return 0; 
} 