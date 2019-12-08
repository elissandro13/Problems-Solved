#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

#define N 5

char mat[N][N];

int dir[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

int maximum, n;
bool v[N][N];

bool isInside(int x,int y)
{
  if(x >= 0 && x < n && y >= 0 && y < n)
    return true;
 return false;
}

bool isSafe (int row, int col)
{
    for (int i = 0; i < 4; ++i){
        int dx = row + dir[i][0];
        int dy = col + dir[i][1];
        while (isInside(dx,dy)) {
            if (mat[dx][dy] == 'X')
                break;
            if (v[dx][dy])
                return false;
            dx += dir[i][0];
            dy += dir[i][1];
	    }
    }
    return true;
}

void placeRook (int x, int y, int num)
{
  for (int i = x; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
	{
	  if (!v[i][j] && mat[i][j] == '.' && isSafe (i, j))
	    {
	      v[i][j] = true;
	      placeRook (i, j, num + 1);
	      v[i][j] = false;  // backtrack
	    }
	}
    }
  if (num > maximum)
    maximum = num;
}

int main ()
{
  freopen ("input.txt", "r", stdin);
  while (scanf ("%d", &n) && n)
    {
      for (int i = 0; i < n; ++i)
	{
	  scanf ("%s", mat[i]);
	}
      maximum = -1;
      memset (v, 0, sizeof (v));
      placeRook (0, 0, 0);
      printf ("%d\n", maximum);
    }
  return 0;
}