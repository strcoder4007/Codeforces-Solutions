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

long long n, m, ans, sum, minn, maxx;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
minn = 9*1e18;
if(m == 0)
{
	cout<<n-1<<endl;
	return 0;
}
while(m--)
{
	long long u, v;
	cin>>u>>v;
	if(u > v)
		swap(u, v);
	maxx = max(maxx, u);
	minn = min(minn, v);
}
sum = minn-maxx;;
cout<<max(0ll, sum)<<endl;

return 0;}