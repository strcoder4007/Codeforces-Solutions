#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  vector<pair<int, int> > myvec;
  for(int i = 0; i < n; i++)
  {
    int xs;
    cin>>xs;
    myvec.push_back(make_pair(xs, i+1));
  }
  sort(myvec.begin(), myvec.end());
  vector<pair<int, int> > swaps;
  for(int i = 1; i < n; i++)
    if(myvec[i-1].first == myvec[i].first)
      swaps.push_back(make_pair(i-1, i));
  if(swaps.size() < 2)
    cout<<"NO"<<endl;
  else
  {
    cout<<"YES"<<endl;
    for(int i = 0; i < myvec.size(); i++)
      cout<<myvec[i].second<<" ";
    cout<<endl;
      swap(myvec[swaps[0].first], myvec[swaps[0].second]);
    for(int i = 0; i < myvec.size(); i++)
      cout<<myvec[i].second<<" ";
    cout<<endl;
      swap(myvec[swaps[1].first], myvec[swaps[1].second]);
    for(int i = 0; i < myvec.size(); i++)
      cout<<myvec[i].second<<" ";
    cout<<endl;
  }
}