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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

int n,m, a[1010], dp[1010][1010];

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
if(n>m)
    cout<<"YES"<<endl;
else
{
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<m;j++)
            dp[i][(j+a[i])%m]+=dp[i-1][j];
        for(int j=0;j<m;j++)
            dp[i][j]+=dp[i-1][j];
        dp[i][a[i]%m]++;
    }
    if(dp[n][0])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;}