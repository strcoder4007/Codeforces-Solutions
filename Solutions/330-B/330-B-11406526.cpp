#include <bits/stdc++.h>
using namespace std;

int mark[1010];

int main(void)
{
  ios_base::sync_with_stdio(false);
  //freopen("F:/input.txt", "r", stdin);
  //freopen("F:/output.txt", "w", stdout);
  int n, m;
  cin>>n>>m;
  while(m--)
  {
    int a, b;
    cin>>a>>b;
    mark[a] = 1;
    mark[b] = 1;
  }
  cout<<n-1<<endl;
  for(int i = 1; i <= n; i++)
    if(!mark[i])
    {
      for(int j = 1; j <= n; j++)
        if (i != j)
          printf("%d %d\n", i, j);
      return 0;
    }
}