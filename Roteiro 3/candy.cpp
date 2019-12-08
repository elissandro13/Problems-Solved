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
        if(n == -1)
            break;
        int v[n+1],total = 0;
        int tirar = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d",&v[i]);
            total += v[i];
        }

        int balas = total / n;
        if(total % n == 0){
            for (int i = 0; i < n; i++) {
                if(v[i] > balas)
                    tirar += v[i] - balas;
            }
            cout << tirar << "\n";

        }
        else {
            cout << "-1\n";
        }

    }
    return 0;
}