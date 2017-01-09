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

int n;
int v[1<<20],d[1<<19],p[1<<18],used[1<<18];
vector<int> ans;

void run2(int x)
{
    used[x]=1;
    for (int i=x+1;i<=n;i++)
    {
        if (used[i])
            continue;
        p[i]-=d[x];
        if (p[i]<0)
            run2(i);
    }
}

void run1(int x)
{
    used[x]=1;
    int vv=v[x];
    for (int i=1;i<=n;i++)
    {
        if (used[i])
            continue;
        if (vv<0)
            continue;
        p[i]-=vv;
        vv--;
    }
    for (int i=1;i<=n;i++)
        if (used[i]==0&&p[i]<0)
            run2(i);
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=1;i<=n;i++)
    cin>>v[i]>>d[i]>>p[i];

for (int i=1;i<=n;i++)
{
    if (used[i])
        continue;
    run1(i);
    ans.push_back(i);
}

cout<<ans.size()<<endl;
for (int i=0;i<ans.size();i++)
{
    if (i)
        cout<<" ";
    cout<<ans[i];
}
cout<<endl;


return 0;}