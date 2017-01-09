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
   int n, k;
   cin>>n>>k;
   int xs = k;
   int ary[n];
   int sum = 0;
   for(int i = 0; i < n; i++){
     cin>>ary[i];
     sum += ary[i];}
   int avg = sum/n;
   vpii myvec;
   while(k--)
   {
     int mx = max_element(ary, ary+n)-ary;
     int mn = min_element(ary, ary+n)-ary;
     if(ary[mx] - ary[mn] <= 1)
       break;
     ++ary[mn];
     --ary[mx];
     myvec.pb(mp(mx, mn));
   }
   int instability = *max_element(ary, ary+n) - *min_element(ary, ary+n);
   cout<<instability<<" "<<xs-k-1<<endl;
   for(int i = 0; i < myvec.size(); i++)
     cout<<myvec[i].first+1<<" "<<myvec[i].second+1<<endl;
   }