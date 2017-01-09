#include <bits/stdc++.h>
using namespace std;

int main (void)
{
  //freopen("F:/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n, l;
  double ans;
  cin>>n>>l;
  vector<int> myvec;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin>>x;
    myvec.push_back(x);
  }
  sort(myvec.begin(), myvec.end());
  double maxdist = 0.0;
  for(int i = 1; i < n; i++)
    if(maxdist < (myvec[i]-myvec[i-1]))
      maxdist = (myvec[i]-myvec[i-1]);
  int left, right;
  left = myvec[0];
  right = l-myvec[n-1];
  ans = max(maxdist/2.0, (double)max(left, right));
  printf("%5lf", ans);
}