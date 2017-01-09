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
  int ary[n+1] = {0};
  for(int i = 1; i <= n; i++)
  {
    int xs;
    cin>>xs;
    ary[xs] = i;
  }
  for(int i = 1; i <= n; i++)
    cout<<ary[i]<<" ";
  cout<<endl;
  return 0;
}