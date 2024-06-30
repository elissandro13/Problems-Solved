#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>


using namespace std;



int main(){

   int n, k, l, c, d, p, nl, np;

   cin >> n>> k>> l>> c>> d>> p>> nl>> np;


   int total_slices = (d * c) / n;
   int total_suco = k * l;
   int sal_perc = p / (np*n);

   int suco_perc = total_suco / (n*nl);



   cout << min(suco_perc, min(sal_perc, total_slices)) << endl;

   // Para cada bebida eu precido de  1 d, np, nl
    
    //cada n precisa de nl np e 1 D
    // CADA  K TEM L
    // C LIMMAO EM D
    // P SALT e n

    return 0;
}
