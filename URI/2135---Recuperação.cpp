
#include <iostream>
using namespace std;
int n;

int a[100];

int main()

{

  int t = 1;

  while (cin >> n)

  {

    for (int i = 0; i < n; i++)
      cin >> a[i];

    int soma = 0;

    int numeroPedido = -1000000;

    for (int i = 0; i < n; i++)

    {

      if (a[i] == soma) {

        numeroPedido = a[i];

        break;
      }
