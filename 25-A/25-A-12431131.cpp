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
  int even = 0, odd = 0, ieven, iodd;
  for(int i = 1; i <= n; i++)
  {
      int xs;
      cin>>xs;
      if(xs&1)
      {
          ++odd;
          iodd = i;
      }
      else
      {
          ++even;
          ieven = i;
      }
  }
  if(even == 1)
    cout<<ieven<<endl;
  else
    cout<<iodd<<endl;
}