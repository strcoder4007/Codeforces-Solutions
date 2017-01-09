#include <bits/stdc++.h>
using namespace std;

int a[2010];

int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n, k;
  cin>>n>>k;
  for (int i = 0; i < n; i++) cin>>a[i];
  sort(a, a + n);
  int ans = 0;
  for (int i = n - 1; i >= 0; i -= k) {
    ans += 2 * (a[i] - 1);
  }
  cout<<ans<<endl;
  return 0;
}