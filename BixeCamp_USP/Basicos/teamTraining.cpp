#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;



int main(){ _

    int n, m;

    cin >> n >> m;

    int total = 0;

    while(n > 0 && m > 0) {

        if(n == 1 && m == 1) break;

        if(n > m) {
            n--;
            n--;
            m--;

            total++;
        } else {

            m--;
            n--;
            m--;

            total++;
        }
    }

    cout << total << endl;

    return 0;
}