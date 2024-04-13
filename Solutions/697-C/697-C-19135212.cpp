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

long long q, opt, u, v, w, a, b, ans;
map<long long, long long>weight;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>q;
while(q--)
{
	cin>>opt;
	if(opt == 1)
	{
		cin>>u>>v>>w;
		while(u != v)
			if(u > v)
				weight[u] += w, u >>= 1;
			else
				weight[v] += w, v >>= 1;
	}
	else
	{
		cin>>a>>b, ans = 0;
		while(a != b)
			if(a > b)
				ans += weight[a], a >>= 1;
			else
				ans += weight[b], b >>= 1;
		cout<<ans<<endl;
	}
}


return 0;}