#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define arsz (1<<20)
typedef long long ll;
int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  string s, t;
  cin>>s>>t;
  int same = true;
  for(int i =0; i < s.size(); i++)
  {
    if(s[i] != t[s.size()-i-1])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}