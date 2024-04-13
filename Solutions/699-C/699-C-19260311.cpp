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


int n, xs, dp[110][3];

int minn(int a, int b, int c)
{
	return min(a, min(b, c));
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
{
	cin>>xs;
	dp[i][0] = 1+minn(dp[i-1][0], dp[i-1][1], dp[i-1][2]);
	if(xs == 0)
		dp[i][1] = dp[i][2] = bs;
	else if(xs == 1)
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]), dp[i][2] = bs;
	else if(xs == 2)
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]), dp[i][1] = bs;
	else if(xs == 3)
	{
		dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
	}
}
cout<<minn(dp[n][0], dp[n][1], dp[n][2])<<endl;


return 0;}