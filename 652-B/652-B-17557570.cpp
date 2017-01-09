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
#define y1 zjdfshnvoavaofobiopj
using namespace std;

int n, minn, start, end;
vector<int>myvec, newvec;
bool error;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
minn = INT_MAX;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    myvec.pb(xs);
}
sort(myvec.begin(), myvec.end());
newvec.pb(myvec[0]);
start = 1, end = n-1;
while(start <= end)
{
    newvec.pb(myvec[end]);
    --end;
    if(start > end)
        break;
    newvec.pb(myvec[start]);
    ++start;
}
for(int i = 1; i < n; i++)
{
    if(!(i&1))
    {
        if(newvec[i] > newvec[i-1])
            error = true;
    }
    else if(newvec[i] < newvec[i-1])
        error = true;
}
if(error)
    cout<<"Impossible"<<endl;
else
{
    for(int i = 0; i < n; i++)
        cout<<newvec[i]<<" ";
    cout<<endl;
}

return 0;}