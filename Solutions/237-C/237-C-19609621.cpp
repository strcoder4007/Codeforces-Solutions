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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int ary[1000010], a, b, l, r, mid, k;
bool error;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 2; i <= 1000000; i++)
    ary[i] = 1;

for(int i = 2; i <= 1000000; i++)
    if(ary[i])
        for(int j = i*2; j <= 1000000; j+=i)
            ary[j] = 0;

for(int i = 1; i <= 1000000; i++)
    ary[i] += ary[i-1];

cin>>a>>b>>k;
if(ary[b]-ary[a-1] < k)
{
    cout<<-1<<endl;
    return 0;
}
l = 0, r = b-a+1;
while(r-l > 1)
{
    mid = (l+r)>>1;
    error = false;
    for(int i = a+mid-1; i <= b; i++)
        if(ary[i]-ary[i-mid] < k)
            error = true;
    if(error)
        l = mid;
    else
        r = mid;
}
cout<<r<<endl;

return 0;}