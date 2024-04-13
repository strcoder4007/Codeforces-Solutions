#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define arsz (1<<20)
typedef long long ll;
int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int ary[n];
  for(int i = 0; i < n; i++)
    cin>>ary[i];
  int maxx = -1, minn = 101;
  int maxpos, minpos;
  for(int i = 0; i <  n; i ++)
  {
    if(ary[i] > maxx)
    {
      maxx = ary[i];
      maxpos = i;
    }
  }
  for(int i = n-1; i >= 0; i --)
  {
    if(ary[i] < minn)
    {
      minn = ary[i];
      minpos = i;
    }
  }
  if(maxpos < minpos)
    cout<<maxpos+(n-1-minpos)<<endl;
  else
    cout<<maxpos+(n-1-minpos)-1<<endl;
}