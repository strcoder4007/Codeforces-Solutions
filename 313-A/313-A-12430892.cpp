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
  int n1=n;
  int n2=n/10;
  int n3=n/100*10+n%10;
  cout<<max(n1,max(n2,n3))<<endl;
}