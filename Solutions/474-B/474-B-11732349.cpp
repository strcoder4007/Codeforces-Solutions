#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int ary[n+1];
  ary[0] = -100010;
  int sum = 0;
  for(int i = 1; i <= n ; i++)
  {
    int xs;
    cin>>xs;
    ary[i] = xs+sum;
    sum = ary[i];
  }
  int q;
  cin>>q;
  int up;
  for(int i = 0; i < q; i++)
  {
    int xs;
    cin>>xs;
    up = lower_bound(ary, ary+n, xs)-ary;
    cout<<up<<endl;
  }
}