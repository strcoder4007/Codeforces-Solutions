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

int n, k, found[1000010];
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
myvec.pb(0);
for(int i = 1; i <= k; i++)
    myvec.pb(i), myvec.pb(i);
for(int i = 1; i <= k; i++)
    myvec.pb(i);
while(myvec.size()-1 < n)
{
    myvec.pb(1);
}
for(int i = 1; i <= n; i++)
    ++found[myvec[i]];
for(int i = 1; i <= k; i++)
    if(found[i] <= 2)
    {
        cout<<-1<<endl;
        return 0;
    }
for(int i = 1; i <= n; i++)
    cout<<myvec[i]<<" ";
cout<<endl;




return 0;}