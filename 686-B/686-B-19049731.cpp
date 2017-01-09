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

int n, ary[110], cnt;
vector<pair<int, int> >myvec;

int32_t main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
    cin>>ary[i];
for(int i = 1; i < n; i++)
    if(ary[i] < ary[i-1])
        ++cnt;
while(cnt)
{
    cnt = 0;
    for(int i = 1; i < n; i++)
        if(ary[i] < ary[i-1])
            swap(ary[i], ary[i-1]), myvec.pb(mp(i, i+1));
    for(int i = 1; i < n; i++)
        if(ary[i] < ary[i-1])
            ++cnt;
}
for(int i = 0; i < myvec.size(); i++)
    cout<<myvec[i].F<<" "<< myvec[i].S<<endl;

return 0;}