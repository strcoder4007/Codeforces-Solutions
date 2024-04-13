#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define case(t) int t;cin>>t;while(t--)
typedef long long ll;
int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int ary[n];
  for(int i = 0; i < n; i++)
    cin>>ary[i];
    int minn, maxx;
  for(int i = 0; i < n; i++)
  {
    if(i == 0)
    {
      minn = (ary[1]-ary[0]);
      maxx = ary[n-1]-ary[0];
    }
    else if(i == n-1)
    {
      minn = ary[n-1]-ary[n-2];
      maxx = ary[n-1]-ary[0];
    }
    else{
      minn = min(abs(ary[i]-ary[i-1]), abs(ary[i]-ary[i+1]));
      maxx = max(abs(ary[i]-ary[0]), abs(ary[i]-ary[n-1]));
    }
    cout<<minn<<" "<<maxx<<endl;
  }
}