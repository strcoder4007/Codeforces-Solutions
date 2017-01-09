#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
#define LL long long
using namespace std;

long n,a,b,c,d,ans,ac1,ac2;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=1;i<=4;i++)
{
    cin>>a>>b>>c>>d;
    if (min(a,b)+min(c,d)<=n)
    {
     ans=i;
     ac1=min(a,b);
     ac2=min(c,d);
     while (ac1+ac2<n)++ac1;
    }
}
if (ans==0)cout<<-1<<endl;
else cout<<ans<<" "<<ac1<<" "<<ac2<<endl;

return 0;}