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
  int k, l, m, n, d;
  cin>>k>>l>>m>>n>>d;
  int ary[d+1] = {0};
  for(int i = 1; i <= d; i++ )
  {
    if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
      ary[i] = 1;
  }
  int sum = 0;
  for(int i = 0; i < d+1; i++)
    sum+= ary[i];
  cout<<sum<<endl;
}