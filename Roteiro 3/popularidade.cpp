/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 27 de Agosto de 2019, 10:48
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main() {
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        int v[n][n];
        int maior = 0, total = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d",&v[i][j]);
            }

        }
        for (int i = 0; i < n; i++) {
            total = 0;
            for (int j = 0; j < n; j++) {
                total += v[j][i];
            }
            maior = max(maior, total);

        }
        cout << maior << "\n";
        

    }
    return 0;
}