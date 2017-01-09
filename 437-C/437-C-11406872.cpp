#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  //ios_base::sync_with_stdio(false);
  //freopen("F:/input.txt", "r", stdin);
  //freopen("F:/output.txt", "w", stdout);
  int n, m, ans = 0;
  cin>>n>>m;
  int ary[n];
  for(int i = 1; i <= n; i++)
    scanf("%d", ary+i);
  while(m--)
  {
    int a, b;
    cin>>a>>b;
    ans += min(ary[a], ary[b]);
  }
  cout<<ans<<endl;
}