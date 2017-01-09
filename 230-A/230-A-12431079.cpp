#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
typedef unsigned long long ll;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  int s, n;
  cin>>s>>n;
  vector<pair<int, int> >myvec;
  for(int i = 0; i < n; i++)
  {
      int x, y;
      cin>>x>>y;
      myvec.pb(mp(x, y));
  }
  sort(myvec.begin(), myvec.end());
  for(int i = 0; i < n; i++)
  {
      if(s <= myvec[i].F)
      {
        cout<<"NO"<<endl;
        return 0;
      }
      else
      {
          s += myvec[i].S;
      }
  }
  cout<<"YES"<<endl;
}