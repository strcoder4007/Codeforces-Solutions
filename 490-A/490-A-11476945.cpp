#include <bits/stdc++.h>
using namespace std;

int main (void)
{
  ios_base::sync_with_stdio(false);
  int n, x;
  cin>>n;
  vector<int> p, m, s;
  for(int i = 0; i < n; i++)
    {
      cin>>x;
      if(x == 1)
        p.push_back(i+1);
      else if(x ==2)
        m.push_back(i+1);
      else
        s.push_back(i+1);
    }
  int ans = min(p.size(), min(m.size(), s.size()));
  cout<<ans<<endl;
  for(int i = 0; i < ans; i++)
    cout<<p[i]<<" "<<m[i]<<" "<<s[i]<<endl;
}