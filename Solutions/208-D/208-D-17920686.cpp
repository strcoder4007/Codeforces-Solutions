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

long long n, cur, found[10];
vector<long long>myvec, newvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    myvec.pb(xs);
}
newvec.pb(0);
for(int i = 1; i <= 5; i++)
{
    int xs; cin>>xs;
    newvec.pb(xs);
}
newvec.pb(9*1e18+10);
for(int i = 0; i < n; i++)
{
    cur += myvec[i];
    int up = upper_bound(newvec.begin(), newvec.end(), cur)-newvec.begin()-1;
    while(up > 0 && cur > 0)
    {
        long long k = cur/newvec[up];
        cur -= k*newvec[up];
        found[up] += k;
        up = upper_bound(newvec.begin(), newvec.end(), cur)-newvec.begin()-1;
    }
}
for(int i = 1; i <= 5; i++)
    cout<<found[i]<<" ";
cout<<endl<<cur<<endl;

return 0;}