#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define arlimit 1<<20
typedef long long LL;
string ans[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int cnt = 1;
  int n;
  cin>>n;
  while(true)
  {
    for(int i = 0; i < 5; i++)
    {
      if(n <= cnt)
      {
        cout<<ans[i]<<endl;
        return 0;
      }
      else
        n -= cnt;
    }
    cnt <<= 1;
  }
}