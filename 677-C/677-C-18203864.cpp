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

long long n, ts[100010], cnt, ans, found[100010];
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
ans = 1;
n = st.size();
for(long long i = 0; i < n; i++)
{
	if(st[i] >= 48 && st[i] <= 57)
		ts[i] = st[i]-48;
	else if(st[i] >= 65 && st[i] <= 91)
		ts[i] = st[i]-65+10;
	else if(st[i] >= 97 && st[i] <= 123)
		ts[i] = st[i]-97+35+1;
	else if(st[i] == '-')
		ts[i] = 62;
	else if(st[i] == '_')
		ts[i] = 63;
}
for(long long i = 0; i < 64; i++)
	for(long long j = 0; j < 64; j++)
		++found[i&j];
for(long long i = 0; i < n; i++)
	ans = (ans*found[ts[i]])%MOD;
cout<<ans<<endl;

return 0;}