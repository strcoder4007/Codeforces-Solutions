#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define mp make_pair
#define pb push_back
typedef long long ll;
int main(void)
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  ll n, m, a;
  cin>>n>>m>>a;
  ll res = ceil(double(n)/double(a))*ceil(double(m)/double(a));
  cout<<res<<endl;
}