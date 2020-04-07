#include <iostream>
using namespace std;

int main() {
  int n;
  int vez = 0;
  cin >> n;
  while (n--) {
    int v[15];
    int x, c = 0;
    int pontos = 0;
    int posTrinca = 0, posQuadra = 0, quadra = 0, trinca = 0, temDupla = 0,
        quinta = 0, posQuinta = 0, posDupla2 = 0, posDupla = 0;
    for (int i = 0; i < 15; ++i) {
      v[i] = 0;
    }
    for (int i = 0; i < 5; ++i) {
      cin >> x;
      v[x]++;
    }
    // for(inti=0;i<5;++i)
    //{
    // cout<<"V["<<i<<"]:"<<v[i];

    //}
    // cout<<"\n";
    for (int i = 0; i < 15; ++i) {
      if (v[i] > 0) {
        c++;
      }
      if (v[i] == 4) {
        quadra = 1;
        posQuadra = i;
      }
      if (v[i] == 3) {
        posTrinca = i;
        trinca = 1;
