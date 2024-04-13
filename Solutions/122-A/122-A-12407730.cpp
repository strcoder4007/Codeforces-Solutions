#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define arsz (1<<20)

bool lucky(int n)
{
  bool luck = true;
  while(n != 0)
  {
    if((n%10) != 4 && (n%10) != 7)
      luck = false;
    n = n/10;
  }
  if(luck)
    return true;
  else
    return false;
}

int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    if(lucky(i) && n%i == 0)
    {
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}