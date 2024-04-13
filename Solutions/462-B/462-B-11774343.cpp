#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(0);
  ll n, k;
  cin>>n>>k;
  ll sum = 0;
  ll ary[26] = {0};
  for(ll i = 0; i < n; i++)
  {
    char xs;
    cin>>xs;
    ++ary[xs-'A'];
  }
  sort(ary, ary+26);
  ll i = 25;
  while(k > 0)
  {
    if(k < ary[i])
      sum += k*k;
    else
      sum += ary[i]*ary[i];
    k -= ary[i];
    --i;
  }
  cout<<sum<<endl;
}