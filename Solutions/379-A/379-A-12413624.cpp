#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define arsz (1<<20)
typedef long long ll;
int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  int a, b;
  cin>>a>>b;
  int sum = a;
  while(a >= b)
  {
    int mod = a%b;
    a /= b;
    sum += a;
    a += mod;
  }
  cout<<sum<<endl;
}