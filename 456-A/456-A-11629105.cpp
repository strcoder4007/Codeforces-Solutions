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
   int n;
   cin>>n;
   bool is_positive = false, is_negative = false;
   for(int i= 0; i < n ; i++)
   {
     int p, q;
     cin>>p>>q;
     int diff = p-q;
     if(diff > 0)
       is_positive = true;
     if(diff < 0)
       is_negative = true;
   }
   if(is_positive && is_negative)
     cout<<"Happy Alex\n";
   else
     cout<<"Poor Alex\n";
 }