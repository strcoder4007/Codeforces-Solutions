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

long long n, ans, times, num;
vector<long long>myvec;
map<long long, long long> mymap;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 0; i < n; i++)
{
	long long xs; cin>>xs;
	myvec.pb(xs);
	++mymap[xs];
}
sort(myvec.begin(), myvec.end(), greater<long long>());
for(long long i = 0; i < n; i++)
	if(mymap[myvec[i]] >=1)
	{
		num = myvec[i];
		ans += num;
		//cout<<"init = "<<num<<endl;
		--num, --mymap[myvec[i]];
		times = mymap[myvec[i]];
		for(long long j = 0; j < times; j++)
			if(mymap[num] == 0 && num > 0)
			{
				//cout<<"       "<<num<<endl;
				ans += num;
				mymap[num] = -1;
				--num;
			}
			else if(num > 0)
				--j, --num;
		mymap[myvec[i]] = -1;
	}
cout<<ans<<endl;

return 0;}