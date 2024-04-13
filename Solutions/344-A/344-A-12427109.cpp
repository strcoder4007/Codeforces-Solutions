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
  int n;
  cin>>n;
  int ary[n];
  for(int i = 0; i < n; i++)
  {
    cin>>ary[i];
  }
  int count = 0;
  for(int i = 0; i < n; i++)
  {
    int init = ary[i];
    bool inwhile = false;
    while(init == ary[i])
    {
      ++i;
      inwhile = true;
    }
    if(inwhile)
    {
      ++count;
      --i;
    }
  }
  cout<<count<<endl;
}