#include <bits/stdc++.h>
#define case(t) int t; cin>>t; while (t-- > 0)
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int main()
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n, v;
  cin>>n>>v;
  vi myvec;
  for(int i = 0; i < n; i++)
  {
    bool done = false;
    int a;cin>>a;
    for(int j = 0; j < a; j++)
    {
      int xs;cin>>xs;
      if(xs < v && !done)
      {
        done = true;
        myvec.pb(i+1);
      }
    }
  }
  cout<<myvec.size()<<endl;
  for(int i = 0; i < myvec.size(); i++)
    cout<<myvec[i]<<" ";
  cout<<endl;
}