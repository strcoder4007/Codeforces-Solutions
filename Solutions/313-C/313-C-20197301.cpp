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

long long n, save, num, ans, pw, times;
vector<long long>myvec, newvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
myvec.pb(-1);
for(long long i = 0; i < n; i++)
{
	long long xs; cin>>xs;
	myvec.pb(xs);
}
if(n == 1)
{
	cout<<myvec[n]<<endl;
	return 0;
}
sort(myvec.begin(), myvec.end(), greater<long long>());
save = n;
while(save > 1)
{
	save /= 4;
	++pw;
}
++pw;
save = 0, num = 0;
times = 3;
ans = myvec[0]*pw, --pw;
myvec.erase(myvec.begin());
while(save < myvec.size()-1)
{
	for(long long i = 0; i < times; i++)
		ans += myvec[save]*pw, ++save;
	--pw, times *= 4;
}
cout<<ans<<endl;

return 0;}