#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory.h>
using namespace std;

typedef long long LL;
#define INF 1e9;
#define NINF -1*1e9;
#define mod 1e9+9;
#define fori(n) for (LL i=1;i<=n;i++)
#define forj(n) for (LL j=1;j<=n;j++)
#define fork(n) for (LL k=1;k<=n;k++)
#define for2i(a,b) for (LL i=a;i<=b;i++)
#define for2j(a,b) for (LL j=a;j<=b;j++)
#define forii(a,b) for (LL i=b;i>=a;i--)
#define forji(a,b) for (LL j=b;j>=a;j--)
#define pi 3.14159265;

LL max(LL a,LL b){if (a>b){return a;} else {return b;}}
LL min(LL a,LL b){if (a<b){return a;} else {return b;}}

int main(){
    int n,m;
    cin>>n>>m;
    int a[51];
    fori(m){cin>>a[i];}
    sort(a+1,a+m+1);
    int ans=-1;
    fori(m-n+1){
        if (ans==-1){ans=a[i+n-1]-a[i];}
        else {ans=min(ans,a[i+n-1]-a[i]);}
    }
    cout<<ans<<endl;
    return 0;
}