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
  int n1, n2, k1 ,k2;
  cin>>n1>>n2>>k1>>k2;
  while(n1 > 0 || n2 > 0)
  {
      n1 -= 1;
      if(n1 <= 0)
      {
        cout<<"Second"<<endl;
        return 0;
      }
      n2 -= 1;
      if(n2 <= 0)
      {
          cout<<"First"<<endl;
          return 0;
      }
  }
}