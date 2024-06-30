#include <iostream>


using namespace std;

int main(){

    int l, c;
   

    int maior = 0;

    cin >> l >> c;
     int m[l][c];
    int count = 0;
    int x;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {   
            cin >> x;
            m[i][j] = x;
        }
    }


    for (int i = 0; i < l; i++)
    {
        count = 0;
        for (int j = 0; j < c; j++)
        {
            count += m[i][j];
            //cout << "num " << m[i][j] << endl;
            //cout << "soma parcial " << count << endl;
        }
       //cout << endl;
        if(count > maior) {
            
            maior = count;
            //cout << "linha" << " " << i << " " << maior << endl;
        }
    }
    
     for (int i = 0; i < c; i++)
    {
        count = 0;
        for (int j = 0; j < l; j++)
        {
            count += m[j][i];
        }
        if(count > maior) 
        {
            
            //cout << "coluna" << " " << i << " " << maior << endl;
            maior = count;
        }
            
    }

    cout << maior << endl;

    return 0;
}