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
  int n, m;
  cin>>n>>m;
  char ary1[n][m];
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m ;j++)
      cin>>ary1[i][j];
  char ary2[n][m];
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      if((i+j)%2 == 0)
        ary2[i][j] = 'W';
      else
        ary2[i][j] = 'B';
      if(ary1[i][j] == '-')
        ary2[i][j] = '-';
    }
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
      cout<<ary2[i][j];
    cout<<endl;
  }

}