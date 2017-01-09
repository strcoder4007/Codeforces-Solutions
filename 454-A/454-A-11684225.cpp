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
   char ary[n][n];
   memset(ary, 'D', sizeof(ary));
   int limit = n/2;
   int stop = limit;
   for(int i = 0; i <= n/2; i++)
   {
     for(int j = 0; j < stop; j++)
     {
       ary[i][j] = '*';
     }
     --stop;
     for(int j = limit+i+1; j < n; j++)
     {
       ary[i][j] = '*';
     }
   }
   int end = n-1;
   for(int i = 0; i < n/2; i++)
   {
     for(int j = 0; j < n; j++)
     {
       ary[i+end][j] = ary[i][j];
     }
     end -= 2;
   }
   for(int i = 0; i < n; i++)
   {
     for(int j = 0; j < n; j++)
         cout<<ary[i][j];
       cout<<endl;
   }
   cout<<endl;
 }