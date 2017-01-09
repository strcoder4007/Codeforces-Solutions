#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool calc(ll n)
{
  ll digit;
  n = abs(n);
  while(n != 0)
  {
    digit = n%10;
    if(digit == 8)
      return true;
    n /= 10;
  }
  return false;
}

int main()
{
  //freopen("F:/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  ll n, x;
    cin >> n;
  x = n;
    while(true)
  {
    n += 1;
    if(calc(n))
      {
        cout<<abs(x-n)<<endl;
        return 0;
      }
  }
}