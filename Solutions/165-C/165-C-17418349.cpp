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

long long k, found[5000010], ans, num;
string st;
vector<long long>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>k>>st;
myvec.pb(0);
for(long long i = 0; i < st.size(); i++)
    if(st[i] == '1')
        ++num, myvec.pb(num);
    else
        myvec.pb(num);

for(long long i = 0;i <= st.size(); i++)
    found[myvec[i]]++;

for(long long i = 0;i <= 1000000; i++)
    if(k>0)
        ans += found[i]*found[i+k];
    else if(found[i]>0)
        ans += (found[i])*(found[i+k]-1)/2;
cout<<ans<<endl;

return 0;}