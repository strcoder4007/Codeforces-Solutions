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

int n, a, ary[110], cnt;
vector<int>myvec, newvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>a;
--a;
for(int i = 0; i < n; i++)
    cin>>ary[i];
for(int i = a-1; i+1; i--)
    myvec.pb(ary[i]);
for(int i = a+1; i < n; i++)
    newvec.pb(ary[i]);


for(int i = 0; i < min(myvec.size(), newvec.size()); i++)
    if(myvec[i] && newvec[i])
        cnt += 2;
if(myvec.size() > newvec.size())
{
    for(int i = newvec.size(); i < myvec.size(); i++)
        if(myvec[i])
            ++cnt;
}
else if(newvec.size() > myvec.size())
{
    for(int i = myvec.size(); i < newvec.size(); i++)
        if(newvec[i])
            ++cnt;
}
if(ary[a])
    ++cnt;
cout<<cnt<<endl;


return 0;}