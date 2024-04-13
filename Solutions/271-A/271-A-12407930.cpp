#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define arsz (1<<20)
typedef long long ll;

bool isdistinct(int num)
{
  int ary[10] = {0};
  while(num!=0)
  {
    ++ary[num%10];
    num /= 10;
  }
  for(int i = 0; i < 10; i++)
  {
    if(ary[i] >= 2)
      return false;
  }
  return true;
}

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  for(int i = n+1; i < 100000; i++)
  {
    if(isdistinct(i))
    {
      cout<<i<<endl;
      return 0;
    }
  }
}