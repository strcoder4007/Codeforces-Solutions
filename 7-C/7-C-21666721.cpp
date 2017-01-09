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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
#define have wghwiejojgoejfoejfast
using namespace std;

long long a, b, c, x, y, d;

long long extendedEuclid(long long aa, long long bb)
{
    if(bb == 0)
    {
        x = 1, y = 0;
        return aa;
    }
    else
    {
        d = extendedEuclid(bb, aa%bb);
        long long temp = x;
        x = y;
        y = temp - (aa/bb)*y;
        return d;
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b>>c;
c *= -1;
d = extendedEuclid(a, b);
if(c%d)
    cout<<-1<<endl;
else
    cout<<x*c/d<<" "<<y*c/d<<endl;

return 0;}