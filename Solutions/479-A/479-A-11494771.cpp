#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main(void)
{
    ios_base::sync_with_stdio(0);
  int a, b, c;
  cin>>a>>b>>c;
  int max = 0;
  vector<int> myvec;
  myvec.push_back(a+b*c);
  myvec.push_back(a*(b+c));
  myvec.push_back(a*b*c);
  myvec.push_back((a+b)*c);
  myvec.push_back(a+b+c);
  for(int i = 0; i < 5; i++)
  {
    if(max < myvec[i])
      max = myvec[i];
  }
  cout<<max<<endl;

}