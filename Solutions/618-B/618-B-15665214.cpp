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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

int n, ary[55][55], counter, found[55];
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
myvec = vector<int>(n+5, 0);
for(int i = 1; i <= n; i++)
    for(int j  =1; j <= n; j++)
        cin>>ary[i][j];

if(n == 2)
{
    myvec.pb(ary[1][2]);
    myvec.pb(ary[1][2]+1);
}
else
{
    for(int i = 1; i <= n; i++)
    {
        memset(found, 0, sizeof found);
        for(int j = 1; j <= n; j++)
            ++found[ary[i][j]];
        for(int j = 1; j <= n; j++)
            if(found[j] > 1)
                myvec[i] = j;
    }
}
bool fst = true;
int start, end;
for(int i = 1; i <= n; i++)
{
    if(myvec[i] == 0 && fst)
        start = i, fst = false;
    if(myvec[i] == 0 && !fst)
        end = i;
}
myvec[start] = ary[start][end];
myvec[end] = ary[start][end]+1;
for(int i = 1; i <= n; i++)
    cout<<myvec[i]<<" ";
cout<<endl;
return 0;}