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
#define int long long

int n, ary[101], ans, start, end, num;
bool found;

main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i  <n; i++)
    cin>>ary[i];
for(int i = 0; i < n; i++)
    if(ary[i] == 1)
    {
        found = true;
        start = i;
        break;
    }
for(int i = n-1; i+1; i--)
{
    if(ary[i] == 1)
    {
        found = true;
        end = i;
        break;
    }
}
ans = 1;
int xs = 1;
if(!found)
{
    cout<<0<<endl;
    return 0;
}
for(int i = start+1; i <= end; i++)
{
    if(ary[i] == 0)
        ++xs;
    else
    {
        ans = ans*xs;
        xs = 1;
    }
}
cout<<ans<<endl;

}