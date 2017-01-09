#include <bits/stdc++.h>
using namespace std;
int main (void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(0);
  int n;
  cin>>n;
  int mx = -1;
  for(int i = 0; i < n; i++)
  {
    int xs;
    cin>>xs;
    if(mx < xs)
    {
      mx = xs;
    }
  }
  cout<<mx<<endl;
}