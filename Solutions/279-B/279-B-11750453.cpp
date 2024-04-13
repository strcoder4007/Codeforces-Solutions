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

 int main (void)
 {
   //freopen("/tmp/input.txt", "r", stdin);
   ios_base::sync_with_stdio(false);
   int n, t;
   cin>>n>>t;
   int ary[n];
   ary[0] = 0;
   for(int i = 1; i <= n; i++)
   {
     int xs;
     cin>>xs;
     xs += ary[i-1];
     ary[i] = xs;
   }
   int best = 0;
   for(int i = 0; i < n; i++)
   {
      int up = upper_bound(ary,ary+n+1,t+ary[i]) - ary;
      best = max(best, up - i - 1);
   }
   cout<<best<<endl;
   }