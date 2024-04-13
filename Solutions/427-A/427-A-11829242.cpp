#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios::sync_with_stdio(false);
  int n;
  cin>>n;
  int sum = 0, counter = 0;
  for(int i = 0; i < n; i++)
  {
    int xs;
    cin>>xs;
    counter += xs;
    if(counter < 0)
      {++sum;counter = 0;}
  }
  cout<<sum<<endl;
}