#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int sum = 0;
  int ary[n];
  for(int i = 0; i < n; i++)
    cin>>ary[i];
  for(int i = 0; i < n; i++)
  {
    if(ary[i] == 1)
    {
      ++sum;
      ++i;
      while(ary[i] == 1)
      {
        ++sum;
        ++i;
      }
      ++sum;
    }
  }
  if(sum != 0)
    --sum;
  cout<<sum<<endl;
}