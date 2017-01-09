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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

int n,m,q,ar[600][600];
int res;
multiset<long> S;

int solve(int line)
{
    int bst=0;
    int s=0;
    for (int i=1;i<=m;i++)
    {
        ++s;
        if (ar[line][i]==0)
            s=0;
        bst=max(bst,s);
    }
    return bst;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m>>q;
for (int i=1;i<=n;i++)
 for (int j=1;j<=m;j++)
  cin>>ar[i][j];

for (int i=1;i<=n;i++)
{
    int res=solve(i);
    S.insert(res);
}

for (;q;--q)
{
    int a,b;
    cin>>a>>b;
    int res=solve(a);
    S.erase(S.find(res));
    ar[a][b]^=1;
    res=solve(a);
    S.insert(res);
    cout<<(*S.rbegin())<<endl;
}

return 0;}