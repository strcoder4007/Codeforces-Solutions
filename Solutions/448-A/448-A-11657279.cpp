#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  //ios_base::sync_with_stdio(false);
  int a1, a2, a3, b1, b2, b3;
  cin>>a1>>a2>>a3;
  cin>>b1>>b2>>b3;
  int n;
  cin>>n;
  vector<int> myvec;
  int asum = a1+a2+a3;
  int bsum = b1+b2+b3;
  while(asum != 0)
  {
    myvec.push_back(asum%5);
    if(asum%5 == 0 && asum != 0)
      asum -= 5;
    else
      asum -= asum%5;
  }
  while(bsum != 0)
  {
    myvec.push_back(bsum%10);
    if(bsum%10 == 0 && bsum != 0)
      bsum -= 10;
    else
      bsum -= bsum%10;
  }
  if(myvec.size() > n)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
}