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

long long n, d, a, b, sum;
vector<pair<long long, long long> > myvec, newvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>d>>a>>b;
for(long long i = 0; i < n; i++)
{
	long long x, y; cin>>x>>y;
	myvec.pb(mp(x*a+y*b, i+1));
}
sort(myvec.begin(), myvec.end());
for(long long i = 0; i < n; i++)
{
	sum += myvec[i].F;
	if(d-sum >= 0)
		newvec.pb(myvec[i]);
}
cout<<newvec.size()<<endl;
for(long long i = 0; i < newvec.size(); i++)
	cout<<newvec[i].S<<" ";
cout<<endl;

return 0;}