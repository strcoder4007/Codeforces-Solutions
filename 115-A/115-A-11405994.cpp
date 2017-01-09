#include <bits/stdc++.h>
using namespace std;

int q, n, done[3000], s, ans, ar[2100][2100];
vector<int> myvec;

void dfs(int a, int b)
{
  done[a] = 1;
  ans = max(ans, b);
  for(int i = 1; i <= n; i++)
    if(ar[a][i] == 1 && done[i] == 0)
      dfs(i, b+1);
}

int main(void)
{
  ios_base::sync_with_stdio(0);
  //freopen("F:/input.txt", "r", stdin);
  //freopen("F:/output.txt", "w", stdout);
  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    cin>>q;
    if(q == -1)
      myvec.push_back(i);
    else
    {
      ar[q][i] = 1;
      ar[i][q] = 1;
    }
  }
  for(int i = 0; i < myvec.size(); i++)
  {
    q = myvec[i];
    s = 0;
    dfs(q, 1);
  }
  cout<<ans<<endl;
  return 0;
}