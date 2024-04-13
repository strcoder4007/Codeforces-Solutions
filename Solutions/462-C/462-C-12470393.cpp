#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
typedef unsigned long long LL;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  LL n;
  cin>>n;
  LL ary[n];
  LL sum = 0;
  for(int i = 0; i < n; i++)
      cin>>ary[i];
  if(n == 1)
  {
      cout<<ary[0]<<endl;
      return 0;
  }
  sort(ary, ary+n);
  LL cur = 2;
  for(int i = 0; i < n; i++)
  {
    sum += (cur)*ary[i];
    cur++;
  }
  sum -= ary[n-1];
  cout<<sum<<endl;
}