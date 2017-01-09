#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define arlimit 1<<20
int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int a, b, n;
  cin>>a>>b>>n;
  int k = n+2;
 for(int i = 1; i < k; i++)
  {
    if(i%2 != 0)
    {
      if( __gcd(a, n) <= n)
        n -= __gcd(a, n);
      else
      {
        cout<<1<<endl;
        return 0;
      }
    }
    else
    {
      if(__gcd(b, n) <= n)
        n -= __gcd(b, n);
      else
      {
        cout<<0<<endl;
        return 0;
      }
    }
  }
}