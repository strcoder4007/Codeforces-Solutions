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

int n, m, x, y, black[1010], white[1010];
int prefix_w[1010], prefix_b[1010], dp[1010][2];
char ary[1010][1010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>x>>y;
for(int i = 1; i <= n; i++)
	for(int j = 1; j <= m; j++)
	{
		cin>>ary[i][j];
		if(ary[i][j] == '#')
			++black[j];
		else
			++white[j];
	}
for(int j = 1; j <= m; j++)
	prefix_w[j] = prefix_w[j-1]+white[j],
	prefix_b[j] = prefix_b[j-1]+black[j];

for(int i = 1; i <= m; i++)
	dp[i][0] = dp[i][1] = 1e9;

for(int i = 0; i <= m; i++)
	for(int xs = i+1; xs <= m; xs++)
		if(xs-i >= x && xs-i <= y)
		{
			dp[xs][1] = min(dp[xs][1], dp[i][0]+prefix_w[xs]-prefix_w[i]);
			dp[xs][0] = min(dp[xs][0], dp[i][1]+prefix_b[xs]-prefix_b[i]);
		}
		
cout<<min(dp[m][0], dp[m][1])<<endl;

return 0;}