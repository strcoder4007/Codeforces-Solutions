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

long long n, k, dp[2010][2010], ans;

void sum(long long &a, long long &b)
{
	a+=b;
	while(a >= bs)
		a -= bs;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
for(int j = 1; j <= n; j++)
	dp[1][j] = 1;
for(int i = 1; i < k; i++)
	for(int j = 1; j <= n; j++)
		for(int hop = j; hop <= n; hop+=j)
			sum(dp[i+1][hop], dp[i][j]);
for(int j = 1; j <= n; j++)
	sum(ans, dp[k][j]);
cout<<ans<<endl;


return 0;}