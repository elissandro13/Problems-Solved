#include <cstdio>
#include <iostream>
#include <string.h>

#define MAXN1000

using namespace std;

int n;
char table[MAXN][MAXN];
bool mark[MAXN][MAXN];
bool safe[MAXN][MAXN];

bool dfs(int y, int x) {
  if (y < 0 || y >= n || x < 0 || x >= n)
    return false;
  if (mark[y][x])
    return safe[y][x];

  mark[y][x] = true;
  safe[y][x] = true;

  int y2 = y, x2 = x;
  switch (table[y][x]) {
  case 'A':
    y2--;
    break;
  case '<':
    x2--;
    break;
  case '>':
    x2++;
    break;
  case 'V':
    y2++;
    break;
  }

  return safe[y][x] = dfs(y2, x2);
}
