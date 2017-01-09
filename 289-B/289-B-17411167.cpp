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
#include <climits>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long n,m,d,s,ans;
long long ar[200][300];long long q;
long long rem[100000],ddiv[100000];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>d;
ans=100000000;
ans*=ans;

for (int i=0;i<=10000;i++)
{
 rem[i]=i%d;ddiv[i]=i/d;
}

for (int i=1;i<=n;i++)
for (int j=1;j<=m;j++)
cin>>ar[i][j];

for (int r=0;r<=10000;r++)
{
s=0;

for (int i=1;i<=n;i++)
for (int j=1;j<=m;j++)
{
    q=ar[i][j]-r;
    q=abs(q);
    if (rem[q])s=1000000000;
    else s+=ddiv[q];
}
ans=min(ans,s);
}
if (ans>100000000)ans=-1;
cout<<ans<<endl;

return 0;}