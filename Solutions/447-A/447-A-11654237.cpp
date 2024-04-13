#include <bits/stdc++.h>
using namespace std;
int ary[101][101];
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  //ios_base::sync_with_stdio(false);
  int p, n;
  cin>>p>>n;
  int ary[p];
  memset(ary, -1, sizeof(ary));
  for(int i = 0; i < n; i++)
  {
    int xs;
    cin>>xs;
    if(ary[xs%p] != -1)
    {
      cout<<i+1<<endl;
      return 0;
    }
    ary[xs%p] = xs;
  }
  cout<<-1<<endl;
}