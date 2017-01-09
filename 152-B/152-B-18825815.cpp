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

long long n, m, a, b, k, steps, ans, fst, sec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>a>>b>>k;
for(long long i = 0; i < k; i++)
{
    long long x, y;
    cin>>x>>y;
    if(x == 0)
        fst = 1e9;
    else
    {
        if(x > 0)
            fst = abs((n-a)/x);
        else
            fst = abs((1-a)/x);
    }
    if(y == 0)
        sec = 1e9;
    else
    {
        if(y > 0)
            sec = abs((m-b)/y);
        else
            sec = abs((1-b)/y);
    }
    steps = min(fst, sec);
    a += x*steps, b += y*steps;
    //cout<<steps<<" next boundary: "<<a<<" "<<b<<" fst & sec: "<<fst<<" "<<sec<<endl;
    ans += steps;
}
cout<<ans<<endl;


return 0;}