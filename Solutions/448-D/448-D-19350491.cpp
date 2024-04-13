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

long long n, m, k, mid, lt, rt, num;

long long solve(long long x)
{
	long long res = 0;
	for(long long i = 1; i <= n; i++)
		res += min(m, (x-1)/i);
	return res;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
lt = 1, rt = n*m;
while(lt < rt)
{
	mid = (lt+rt+1)>>1;
	if(solve(mid) < k)
		lt = mid;
	else
		rt = mid-1;
}
cout<<lt<<endl;

return 0;}