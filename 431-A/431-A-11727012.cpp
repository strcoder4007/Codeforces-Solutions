#include <bits/stdc++.h>
#define case(t) int t; cin>>t; while (t-- > 0)
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n, a, b;
 int main (void)
 {
   //freopen("/tmp/input.txt", "r", stdin);
   ios_base::sync_with_stdio(false);
   int ary[5];
   cin>>ary[1]>>ary[2]>>ary[3]>>ary[4];
   string s;
   cin>>s;
   int sum = 0;
   for(int i = 0; i < s.size(); i++)
     sum += ary[int(s[i])-48];
   cout<<sum<<endl;
 }