#include <bits/stdc++.h>

using namespace std;

int binarySearch(int vet[], int begin, int end, int num) {
  int mid;
  mid = (begin + end) / 2;
  if (begin <= end) {
    if (vet[mid] == num) {
      return mid;
    } else if (vet[mid] > num) {
      return binarySearch(vet, begin, mid - 1, num);
    } else if (vet[mid] < num) {
      return binarySearch(vet, mid + 1, end, num);
    }
  } else {
    return -1;
  }
}

int main() {

  int n;
  while (cin >> n) {
    int vet[n], q = 0, x, soma = 0;
    cin >> x;
    vet[0] = x;
    soma = x;
    q = 0;
    for (size_t i = 1; i < n; i++) {
      cin >> x;
      soma += x;
