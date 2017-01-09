#include <bits/stdc++.h>
using namespace std;

int n,ary[1<<20],mx;
vector<int> myvec[1<<20];
int l,r;

int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(0);
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    cin>>ary[i];
    myvec[ary[i]].push_back(i);
    if (mx < myvec[ary[i]].size())
      mx = myvec[ary[i]].size();
  }
  l=1;
  r=n;
  for (int i = 0; i <= 1000000; i++)
  {
    if (myvec[i].size() < mx)
        continue;
    int span = myvec[i].back() - myvec[i][0];
    if (span < r-l)
    {
        l = myvec[i][0];
        r = myvec[i].back();
    }
  }
  cout<<l<<" "<<r<<endl;
}