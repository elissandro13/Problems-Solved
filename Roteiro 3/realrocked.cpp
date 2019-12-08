#include <bits/stdc++.h>

using namespace std;
#define N 5

char board[N][N];
bool v[N][N];
int n,score = 0;
int dir[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };



bool isInside(int x,int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool isSafe(int row,int col){
    for (size_t i = 0; i < 4; i++)
    {
        int dx = row + dir[i][0];
        int dy = col+ dir[i][1];
        while (isInside(dx,dy))
        {
            if(board[dx][dy] == 'X')
                break;
            if (v[dx][dy])
                return false;
                dx += dir[i][0];
                dy += dir[i][1];
        }
        
    }
    return true;
}

void placeRook(int x,int y,int num){

    for (int i = x; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(!v[i][j] && board[i][j] == '.' && isSafe(i,j)){
                v[i][j] = true;
                placeRook(i,j,num+1);
                v[i][j] = false;
            }
        }
    }
    
    score = max(score,num);
}
int main(){
    while (cin >> n)
    {
        if(n == 0)
            break;
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                cin >> board[i][j];
            }
            
        }
        
        //cout << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++){
        //         cout << board[i][j];
        //     }
        //     cout << endl;
            
        // }

        score = 0;
        memset (v, 0, sizeof (v));
        placeRook(0,0,0);
        cout << score << "\n";
        
    }
    
    return 0;
}