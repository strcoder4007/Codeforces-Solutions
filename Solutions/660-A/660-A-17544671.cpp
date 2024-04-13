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

int n, ary[1010], start;
vector<pair<int, int> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
    cin>>ary[i];
for(int i = 1; i < n; i++)
    if(__gcd(ary[i], ary[i-1]) != 1)
            myvec.pb(mp(i, 1));
cout<<myvec.size()<<endl;
for(int i = 0; i < n; i++)
{
    if(myvec.size())
        if(myvec[start].F == i)
        {
            cout<<myvec[start].S<<" ";
            ++start;
        }
        cout<<ary[i]<<" ";
}
cout<<endl;

return 0;}