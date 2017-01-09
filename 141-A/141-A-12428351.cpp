#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
typedef long long ll;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);
  string s, t, st;
  cin>>s>>t>>st;
  s += t;
  sort(s.begin(), s.end());
  sort(st.begin(), st.end());
  int lens = s.size();
  int lenst = st.size();
  if(lens != lenst)
  {
    cout<<"NO"<<endl;
    return 0;
  }
  for(int i = 0; i < lens; i++)
  {
    if(s[i] != st[i])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}