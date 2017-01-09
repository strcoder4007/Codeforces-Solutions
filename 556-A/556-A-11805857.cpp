#include <bits/stdc++.h>
using namespace std;
int main()
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count0 = 0, count1 = 0;
  for(int i = 0; i < n; i++)
  {
    if(s[i] == '0')
      ++count0;
    else
      ++count1;
  }
  int count = min(count0, count1);
  int res = (n-count*2);
  cout<<res<<endl;
}