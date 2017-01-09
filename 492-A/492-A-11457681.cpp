#include <bits/stdc++.h>
using namespace std;

int main (void)
{
  int n;
  cin>>n;
  int tri = 0;
  for(int i = 1; i <= n; i++)
  {
    tri += (i*i+i)/2;
    if(tri == n)
      {cout<<i<<endl;
      break;}
    if(tri > n)
    {
      cout<<i-1<<endl;
      break;
    }
  }
}