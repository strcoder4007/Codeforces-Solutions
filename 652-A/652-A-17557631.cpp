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

long long h1, h2, a, b, day;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>h1>>h2>>a>>b;
// afternoon
for(long long i = 1; i <= 8; i++)
{
    h1 += a;
    if(h1 >= h2)
    {
        cout<<day<<endl;
        return 0;
    }
}
if(a <= b)
{
    cout<<-1<<endl;
    return 0;
}
h1 -= 12*b;
// morning

while(h1 < h2)
{
    ++day;
    // morning
    for(long long i = 1; i <= 4; i++)
    {
        h1 += a;
        if(h1 >= h2)
        {
            cout<<day<<endl;
            return 0;
        }
    }
    // afternoon
    for(long long i = 1; i <= 8; i++)
    {
        h1 += a;
        if(h1 >= h2)
        {
            cout<<day<<endl;
            return 0;
        }
    }
    // night
    h1 -= 12*b;
}



return 0;}