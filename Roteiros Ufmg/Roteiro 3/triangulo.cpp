#include <bits/stdc++.h>

using namespace std;

bool check(int *p){
    
    int sides[3];
    sides[0] =  (p[4] -  p[2]) * (p[4] -  p[2]) + (p[5] -  p[3]) * (p[5] -  p[3]);
    sides[1] =  (p[4] -  p[0]) * (p[4] -  p[0]) + (p[5] -  p[1]) * (p[5] -  p[1]);
    sides[2] =  (p[2] - p[0]) * (p[2] - p[0]) + (p[3] - p[1]) * (p[3] - p[1]);
    sort(sides,sides+3);

    if(sides[0] > 0 && sides[2] == sides[0] + sides[1]) return true;
    else return false;
}

int main(){
    int points[6];
    for (size_t i = 0; i < 6; i++)
    {
        cin >>  points[i];
    }
    string awnser = "NEITHER";
    if(check(points)){
        awnser = "RIGHT";
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            points[i]++;
            if(check(points)){awnser = "ALMOST";}  
            points[i] -= 2;
            if(check(points)){awnser = "ALMOST";}      
            points[i]++;
        }
        
    }
    cout << awnser << "\n";
    
    return 0;
}