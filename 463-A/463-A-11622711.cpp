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
   //freopen("/media/str/Coding Stuff/codingfiles/input.txt", "r", stdin);
   //ios_base::sync_with_stdio(false);
   int n,a,ans=-1 ; scanf("%d%d",&n,&a) ;
    a*=100 ;
    while(n--)
    {
        int x,y ; scanf("%d%d",&x,&y) ;
        x=x*100+y ;
        if(a>=x) ans=max(ans,(a-x)%100) ;
    }
    printf("%d\n",ans) ;
 }