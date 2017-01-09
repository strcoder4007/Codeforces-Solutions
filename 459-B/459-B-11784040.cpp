#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  long long n;
  cin>>n;
  long long ary[n];
  for(long long i = 0; i < n; i++)
    cin>>ary[i];
  long long mx = *max_element(ary, ary+n);
  long long mn = *min_element(ary, ary+n);
  long long cmax = 0, cmin = 0;
  for(long long i = 0; i < n; i++)
  {
    if(ary[i] == mx)
      ++cmax;
    if(ary[i] == mn)
      ++cmin;
  }
  long long ans = cmax*cmin;
  if(mx == mn)
    ans = (n*(n-1))/2;
  cout<<mx-mn<<" ";
  cout<<ans<<endl;
}