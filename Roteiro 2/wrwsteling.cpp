#include <bits/stdc++.h>
using namespace std;

int main() {
  int turns;
  cin >> turns;
  while (turns--)
  {
    int n,k;
    cin >> n >> k;
    n = 1 << n;

    vector<int> id(n), n_id;
    vector<int> cur(n), n_cur;
    vector<vector<int>> win_to(n);
    vector<int> power(n);

    for (size_t i = 0; i < n; i++)
    {
      cin >> power[i];
      cur[i] = power[i];
      id[i] = i;
    }

    while(id.size() > 1)
    {
      for (size_t i = 0; i < id.size(); i += 2)
      {
        if(cur[i] >= cur[i+1]){
          win_to[id[i]].push_back(id[i+1]);
          n_cur.push_back(min(power[id[i]], cur[i] - cur[i+1] + k));
          n_id.push_back(id[i]);
          win_to[id[i + 1]].clear();
        }
        else {
          win_to[id[i+1]].push_back(id[i]);
          n_cur.push_back(min(power[id[i+1]], cur[i+1] - cur[i] + k));
          n_id.push_back(id[i+1]);
          win_to[id[i]].clear();
        }
      }
      id = n_id;
      n_id.clear();
      cur = n_cur;
      n_cur.clear();
      
    }
    cout << id[0]  + 1<< endl;
    for (int i = 0; i < win_to[id[0]].size(); ++i) {
      if (i) cout << " ";
      cout << win_to[id[0]][i] + 1;
    }
    cout << endl;
  }
  return 0;
}