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

int n, m, a[110], p;
bool b[110];

int main()
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  cin>>n>>m;
  p = n;
  for(int i = 0; i < n; i++)
    cin >> a[i];
  int i = 0;
  while(p > 1)
  {
    i %= n;
    if(a[i] > 0)
    {
      a[i] -= m;
      if(a[i] <= 0)
        b[i] = true, p--;
    }
    i++;
  }
  for(int i = 0; i < n; i++)
    if(!b[i])
      cout<<i + 1<<endl;;
  return 0;
}