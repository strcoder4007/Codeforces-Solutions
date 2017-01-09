#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n, t, c, ans = 0, cur = 0;
  cin>>n>>t>>c;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin>>x;
    if (x <= t)
      ++cur;
    else
    {
      if (cur >= c)
        ans += cur - c + 1;
      cur = 0;
    }
  }
  if (cur >= c)
    ans += cur - c + 1;
  cout << ans << endl;
  return 0;
}