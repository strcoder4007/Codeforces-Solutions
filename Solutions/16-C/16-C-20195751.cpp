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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long a, b, x, y, deno, maxx, i, idx;
vector<pair<long long, long long> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b>>x>>y;

deno = __gcd(x, y);
x = x/deno, y = y/deno;
i = 1;
idx = -1;
while(x*i <= a && y*i <= b)
	myvec.pb(mp(x*i, y*i)), ++i;
for(long long i = 0; i < myvec.size(); i++)
	if(maxx < myvec[i].F*myvec[i].S)
		maxx = myvec[i].F*myvec[i].S, idx = i;
if(idx == -1)
{
	cout<<0<<" "<<0<<endl;
	return 0;
}
cout<<myvec[idx].F<<" "<<myvec[idx].S<<endl;

return 0;}