#include <bits/stdc++.h>
using namespace std;
int n, g[100000];
vector<int>v;
int main()
{
  //freopen("input.txt", "r", stdin);
  cin >> n;
  for(int i = 0; i < n; ++i)
    cin>>g[i];
  int idx;
  for (int i = 1; i < n; ++i)
  {
    if (g[i] < g[i - 1])
    {
      idx = i;
      for (int j = i; j < n; ++j)
        v.push_back(g[j]);
      for (int j = 0; j < i;++j)
        v.push_back(g[j]);
      break;
    }
  }
  vector<int>g = v;
  if (!g.size())
  {
    puts("0");
    return 0;
  }
  sort(g.begin(), g.end());
  if (g != v)
  {
    puts("-1");
    return 0;
  }
  printf("%d\n", n - idx);
  return 0;
}