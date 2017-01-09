#include <bits/stdc++.h>
using namespace std;

int n, s, done[1010], x[1010], y[1010];

void dfs(int v)
{
  done[v] = 1;
  for(int i = 1; i <= n; i++)
    if(done[i] == 0)
      if(x[i] == x[v] || y[i] == y[v])
        dfs(i);
}

int main(void)
{
  //freopen("F:/input.txt", "r", stdin);
  //freopen("F:/output.txt", "w", stdout);
  ios_base::sync_with_stdio(false);
  cin>>n;
  for(int i = 1; i <= n; i++)
    cin>>x[i]>>y[i];
  for(int i = 1; i <= n; i++)
    if(done[i] == 0)
    {
      ++s;
      dfs(i);
    }
  cout<<s-1<<endl;
}