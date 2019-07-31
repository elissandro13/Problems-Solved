#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


#define MAX 1000

string palavra;
int i, num_palavras, tot_palavras, compr, encontrou;
char letra;

int main(void) {
  num_palavras=0;
  tot_palavras=0;
  scanf("%c",&letra);
  while (cin >> palavra) {
    compr=palavra.length();
    encontrou=0;  // marca se encontrou a letra na palavra
    for (i=0; i<compr; i++)
      if (palavra[i]==letra)
	encontrou=1;
    num_palavras += encontrou;
    tot_palavras++;
  }
  printf("%.1f\n", 100.0*num_palavras/tot_palavras);
  return 0;
}