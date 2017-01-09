#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
typedef unsigned long long ll;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int ary[24][60] = {0};
  for(int i = 0; i < n; i++)
  {
      int h, m;
      cin>>h>>m;
      ++ary[h][m];
  }
  int min = 1;
  for(int i = 0; i < 24; i++)
  {
      for(int j = 0; j < 60; j++)
      {
          if(ary[i][j] > min)
            min = ary[i][j];
      }
  }
  cout<<min<<endl;
}