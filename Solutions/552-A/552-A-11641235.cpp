#include <bits/stdc++.h>
using namespace std;
int ary[101][101];
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  int sum = 0;
  cin>>n;
  for(int i = 0; i < n ; i++)
  {
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    x1-=1;y1-=1;x2-=1;y2-=1;
    for(int j = x1; j <= x2; j++)
      for(int k = y1; k <= y2; k++)
        ++ary[j][k];
  }
  for(int i = 0; i <= 100; i++)
    for(int j = 0; j <= 100; j++)
       sum += ary[i][j];
  cout<<sum<<endl;
}