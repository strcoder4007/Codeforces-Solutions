#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main(void)
{
  ios_base::sync_with_stdio(0);
  int n, m;
  cin>>n>>m;
  if(n == m){
    cout<<n<<endl;
    return 0;}
  double low = ceil(n/2.0);
  for(int i = low; i < n; i++)
  {
      if(m%i == 0 || i%m == 0){
        cout<<i<<endl;
        return 0;}
  }
  cout<<"-1"<<endl;
}