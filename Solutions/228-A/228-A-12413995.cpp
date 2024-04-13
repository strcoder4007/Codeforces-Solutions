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
  set<int>s;
  for (int i = 0; i < 4; i++)
  {
    int j;
    cin>>j;
    s.insert(j);
  }
  cout<<4-(s.size())<<endl;
  return 0;
}