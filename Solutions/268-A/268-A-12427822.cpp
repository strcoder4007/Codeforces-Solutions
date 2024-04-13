#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
typedef long long ll;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector< pair<int, int> > myvec;
  for(int i = 0; i < n; i++)
  {
    int x, y;
    cin>>x>>y;
    myvec.pb(mp(x, y));
  }
  int count = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(i != j && myvec[i].F == myvec[j].S)
        ++count;
    }
  }
  cout<<count<<endl;
}