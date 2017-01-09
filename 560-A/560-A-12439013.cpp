#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
typedef unsigned long long ll;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int ary[n];
  for(int i = 0; i < n; i++)
      cin>>ary[i];
  sort(ary, ary+n);
  int min = ary[0];
  if(min != 1)
    cout<<1<<endl;
  else
    cout<<-1<<endl;
}