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

int n, sum;
bool error;
vector<int>oddvec, evenvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    sum += xs;
    if(xs&1)
        oddvec.pb(xs);
    else
        evenvec.pb(xs);
}
sort(oddvec.begin(), oddvec.end());
sort(evenvec.begin(), evenvec.end());
if(sum%2 == 0)
{
    if(!oddvec.size())
        error = true;
    else
        sum -= oddvec[0];
}
if(!error)
    cout<<sum<<endl;
else
    cout<<0<<endl;

return 0;}