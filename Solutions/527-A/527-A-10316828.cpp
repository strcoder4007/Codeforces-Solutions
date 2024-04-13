#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main (void)
{
  ll a, b;
  ll count = 0;
  cin>>a>>b;
  ll x = a;
  for(int i = 0; i < x; i++)
  {
    if (b > a)
    {
      ll temp = a;
      a = b;
      b = temp;
    }
    if(a == b)
    {
      count++;
      break;
    }
    ll divi = a/b;
    a = a%b;
    count += divi;
    if(a == 0)
        break;

  }
  cout<<count<<endl;
}