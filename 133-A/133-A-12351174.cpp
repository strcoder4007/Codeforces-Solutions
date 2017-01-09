#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define mp make_pair
#define pb push_back
typedef long long ll;
int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  string s;
  cin>>s;
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
    {
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
}