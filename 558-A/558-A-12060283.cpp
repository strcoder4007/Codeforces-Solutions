#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
using namespace std;
int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(0);
  int n, x, y;
  cin>>n;
  vector<pair<int, int> > a, b;
  for(int i = 0; i < n; i++)
  {
    cin>>x>>y;
    if(x < 0)
      a.pb(mp(-x, y));
    else
      b.pb(mp(x, y));
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int ans = 0;
  if(a.size() == b.size())
  {
    for(int i = 0; i < a.size(); i++)
      ans+=a[i].s + b[i].s;
  }
  else if(a.size() > b.size())
  {
    for(int i=0;i<b.size();i++)
      ans+=a[i].s + b[i].s;
    ans+=a[b.size()].s;
  }
  else
  {
    for(int i=0;i<a.size();i++)
      ans+=a[i].s + b[i].s;
    ans+=b[a.size()].s;
  }
  cout<<ans<<endl;
}