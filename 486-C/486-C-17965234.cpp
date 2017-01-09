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

int n, p, calc, ans, start, dest;
string st;
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>p>>st;
for(int i = 0; i < n/2; i++)
{
    calc = min(abs(st[i]-st[n-1-i]), 26-abs(st[i]-st[n-1-i]));
    if(!found && calc != 0)
        start = i, found = true;
    if(calc != 0)
        dest = i;
    ans += calc;
}
--p;
if(p >= n/2)
    p = n-p-1;
if(start == dest && ans)
{
    if(p<=start)
        ans += (start-p);
    else
        ans += (p-start);
}
else
{
    if(p <= start && p < dest && ans)
        ans += (dest-p);
    else if(p >= start && p <= dest && ans)
    {
        if(p-start <= dest-p)
            ans += p-start + (dest-start);
        else
            ans += (dest-p)+(dest-start);
    }
    else if(p > start && p >= dest && ans)
        ans += (p-start);
}
cout<<ans<<endl;

return 0;}