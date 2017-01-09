#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
typedef long long ll;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  ll n, k;
  cin>>n>>k;
  ll half = ceil(double(n)/2);
  if(k <= half)
    cout<<2*k-1<<endl;
  else
  {
    k -= half;
    cout<<k*2<<endl;
  }
}