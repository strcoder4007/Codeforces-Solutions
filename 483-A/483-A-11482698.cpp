#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

bool coprime(ll a, ll b)
{
  if(__gcd(a, b) == 1)
    return true;
  return false;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
  ll l, r;
  cin>>l>>r;
  if(r-l < 2){
    cout<<"-1"<<endl;
    return 0;}
  for(ll i = l; i <= r-2; i++)
    for(ll j = i+1; j <= r-1; j++)
      for(ll k = j+1; k <= r; k++)
      {
        if(coprime(i,j) && coprime(j, k) && !coprime(i, k))
          {
            cout<<i<<" "<<j<<" "<<k<<endl;
            return 0;
          }
      }
  cout<<"-1"<<endl;
}