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

int n, cnt, found[200010];
string st, ts;
char last;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
last = st[0];
cnt = 1;
ts = "";
for(int i = 1; i < n; i++)
{
    if(st[i] == last)
        ++cnt;
    else
        last = st[i], cnt = 1;
    if(cnt > 2)
        found[i] = 1;
}
for(int i = 0; i < n; i++)
    if(found[i] == 0)
        ts += st[i];
st = ts;
n = st.size();
for(int i = 3; i < n; i++)
    if(st[i-3] == st[i-2] && st[i-1] == st[i])
        st[i] = '*';
for(int i = 0; i < n; i++)
    if(st[i] != '*')
        cout<<st[i];
cout<<endl;

return 0;}