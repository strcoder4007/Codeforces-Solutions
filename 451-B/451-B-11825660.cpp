#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    int n;
  cin>>n;
  int ary[n], newary[n];
  for(int i = 0; i < n; i++)
  {
    cin>>ary[i];
    newary[i] = ary[i];
  }
  int l = 0, r = 0, idx = 0;
  bool prev = false;
  for(int i = 1; i < n; i++)
  {
    if(ary[i] < ary[i-1])
      {
        prev = true;
        l = i-1;
        idx = i;
        break;
      }
  }
  for(int i = idx; i < n; i++)
  {
    if(ary[i] > ary[i-1] && prev)
      {
        r = i-1;
        break;
      }
    else if(ary[i] < ary[i-1] && i == n-1)
    {
      r = i;
      break;
    }
  }
  if(l == 0 && r == 0)
  {
    cout<<"yes"<<endl<<1<<" "<<1<<endl;
    return 0;
  }
  int limit = l+(r-l)/2;
  int dec = 0;
  if((r-l)%2 == 0)
    --limit;
  for(int i = l; i <= limit; i++)
  {
    swap(ary[i], ary[r-dec]);
    ++dec;
  }

  sort(newary, newary+n);
  bool done = true;
  for(int i = 0; i < n; i++)
    if(newary[i] != ary[i])
    {
      done = false;
      break;
    }
  if(done)
  {
    cout<<"yes"<<endl;
    cout<<l+1<<" "<<r+1<<endl;
  }
  else
    cout<<"no"<<endl;
}