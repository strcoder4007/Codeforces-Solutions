#include <bits/stdc++.h>
using namespace std;
int n, m, ary[100], x, y;
int gf(int x)
{
    if (ary[x] != x)
    ary[x] = gf(ary[x]);
    return ary[x];
}

int main()
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    ary[i] = i;
    while (m--)
  {
        cin>>x>>y;
        ary[gf(x)] = gf(y);
    }
    long long ans = (1LL << n);
    for (int i = 1; i <= n; i++)
        if (gf(i) == i)
      ans /= 2;
    cout<<ans<<endl;
}