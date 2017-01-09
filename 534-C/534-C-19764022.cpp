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
#define mp make_pair
#define pb push_back
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long n, a, minn, maxx, ary[200010];
long long s;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>a;
for(long long i = 0; i < n; i++)
{
	cin>>ary[i];
	s += ary[i];
}
for(long long i = 0; i < n; i++)
{
	minn = max(1ll, a-(s-ary[i]));
	maxx = min(ary[i], a-(n-1));
	if(minn <= maxx)
		cout<<(minn-1)+(ary[i]-maxx)<<" ";
	else
		cout<<ary[i]<<" ";
}
cout<<endl;


return 0;}