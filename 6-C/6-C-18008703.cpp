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

long long n, ary[100010], lft[100010], rht[100010], ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (long long i=1;i<=n;i++)
{
    cin>>ary[i];
    //cout<<ary[i]<<" ";
}
//cout<<endl;

for (long long i=1;i<=n;i++)
{
    lft[i]=lft[i-1]+ary[i];
    //cout<<lft[i]<<" ";
}
//cout<<endl;

for (long long i=1;i<=n;i++)
{
    rht[i]=lft[n]-lft[i];
    //cout<<rht[i]<<" ";
}
//cout<<endl;

for (long long i=1;i<=n;i++)
    if (lft[i-1]<=rht[i])
        ans++;
cout<<ans<<" "<<n-ans<<endl;

return 0;}