#include <iostream>
using namespace std;
#include <string.h>

// intToInt(chara){
// returna-'0';
//}

void zero(int j, char g[1002]) {
  int k = 0;
  int flag = 0;
  for (int i = 0; i < j; ++i) {
    if (g[i] != '0' && g[i - 1] == '0') {
      k = i;
      flag = 1;
    }
  }
  if (flag == 0)
    cout << 0;
  else {
    for (int i = k; i < strlen(g); ++i) {
      cout << g[i];
    }
  }
}

void analisar(char c, char p[1002], int size) {
  char g[1002];
  int flag = 0;
  int j{0};
  for (int i = 0; i < size; ++i) {

    if (p[i] != c) {
      g[j++] = p[i];
      flag = 1;
    }
  }
  if (flag == 0) {
    cout << 0;
    cout << "\n";
