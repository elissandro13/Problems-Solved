#include <bits/stdc++.h>

using namespace std;
int n,m,score = 0;
int board[21][21];

bool move(int i,int j,int dx,int dy){
    if(dx >= 0 && dy >= 0 && dx < n && dy < m){
        if(board[i][j] == 2 && board[dx][dy] == 0){
            return true;
        }
    }
    return false;
}

void play(int i,int j,int num){
    if(move(i + 1,j + 1,i + 2,j +2)){
        board[i][j] = board[i+1][j+1] = 0;
        board[i+2][j+2] = 1;
        play(i+2,j+2,num+1);
        board[i][j] = 1;
        board[i+1][j+1] = 2;
        board[i+2][j+2] = 0;

    }
    if(move(i - 1,j - 1,i - 2,j -2)){
        board[i][j] = board[i-1][j-1] = 0;
        board[i-2][j-2] = 1;
        play(i-2,j-2,num+1);
        board[i][j] = 1;
        board[i-1][j-1] = 2;
        board[i-2][j-2] = 0;

    }
    if(move(i - 1,j + 1,i - 2,j +2)){
        board[i][j] = board[i-1][j+1] = 0;
        board[i-2][j+2] = 1;
        play(i-2,j+2,num+1);
        board[i][j] = 1;
        board[i-1][j+1] = 2;
        board[i-2][j+2] = 0;

    }
    if(move(i + 1,j - 1,i + 2,j - 2)){
        board[i][j] = board[i+1][j-1] = 0;
        board[i+2][j-2] = 1;
        play(i+2,j-2,num+1);
        board[i][j] = 1;
        board[i+1][j-1] = 2;
        board[i+2][j-2] = 0;

    }
    score = max(num,score);

}

int main(){

    while(cin >> n >> m){

        if(n == 0 && m == 0)
            break;

    
    int piece;
    vector <pair<int,int>> v;
    v.clear();
    memset (board, 3, sizeof (board));
    for (int i = 0; i < n; i++)
    {
        for (int j = i%2; j < m; j += 2)
        {
            cin >> piece;
            board[i][j] = piece;
            if(piece == 1)
                v.push_back(make_pair(i,j));
        }
        
    }
    
    for (int i = 0; i < v.size(); i++)
    {        
        play(v[i].first,v[i].second,0);
    }
    
    cout << score << "\n";
    score = 0;


    }

    return 0;
}