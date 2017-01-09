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

int n, m, num;
bool found;
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    myvec.pb(xs);
    if(xs == m)
        found = true;
}
if(!found)
    myvec.pb(m);
while(1)
{
    sort(myvec.begin(), myvec.end());
    num = myvec[(myvec.size()+1)/2-1];
    if(num < m)
        myvec.pb(100000);
    else if(num > m)
        myvec.pb(1);
    else
        break;
}
cout<<myvec.size()-n<<endl;

return 0;}