#include <bits/stdc++.h>
using namespace std;
int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int ary[n], newary[n];
  for(int i = 0; i < n ; i++)
    cin>>ary[i];
  bool done = true;
  for(int j = 0; j < n; j++)
  {
    done = true;
    for(int i = 0; i < n; i++)
    {
      if(i%2 == 0)
        ary[i] = (ary[i]+1)%n;
      else
      {
        if(ary[i] == 0)
          ary[i] = n-1;
        else
          ary[i] = (ary[i]-1)%n;
      }
    }
    for(int i = 1; i < n ; i++)
    {
      if(ary[i] <= ary[i-1])
      {
        done = false;
        break;
      }
    }
    if(done)
      break;
  }
  if(done)
    cout<<"Yes"<<endl;
  else
   cout<<"No"<<endl;
}