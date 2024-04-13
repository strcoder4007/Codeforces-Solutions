#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt1, cnt2, v1, v2;
bool f(ll num)
{
  ll f[] = {num/v1, num/v2};
  ll l = v1*1ll*v2;
  ll both = num/l;
  ll other = num - f[0] - f[1] + both;
  f[0] -= both;
  f[1] -= both;
  ll tcnt[] = {cnt1-f[1], cnt2-f[0]};
  if(tcnt[0] < 0) tcnt[0] = 0;
  if(tcnt[1] < 0) tcnt[1] = 0;
  return (tcnt[0]+tcnt[1] <= other);
}
int main (void)
{
  scanf("%d %d %d %d", &cnt1, &cnt2, &v1, &v2);
  ll l = 0;
  ll r = ll(1e18);
  while(r-l > 1)
  {
    ll mid = (l+r)>>1;
    if(f(mid))
      r = mid;
    else
      l = mid;
  }
  cout<<r<<endl;
}