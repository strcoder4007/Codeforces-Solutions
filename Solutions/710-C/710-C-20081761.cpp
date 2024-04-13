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

int n, tots, ary[55][55], limit, num, save;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
num = 1;
tots = (n*n+1)/2;
for(int i = 1; i <= n; i++)
	ary[i][n/2+1] = num, num += 2, --tots;
for(int j = 1; j <= n; j++)
	if(ary[n/2+1][j] == 0)
		ary[n/2+1][j] = num, num += 2, --tots;
tots = tots/4;
for(int i = 0; i <= 50; i++)
	if((i*(i+1))/2 == tots)
	{
		limit = i;
		break;
	}
//cout<<n<<" "<<tots<<" "<<limit<<endl;
////////////////
if(tots)
{
	if(limit == 0)
	{
		ary[1][1] = num, num += 2;
		ary[1][n] = num, num += 2;
		ary[n][1] = num, num += 2;
		ary[n][n] = num, num += 2;
	}
	save = limit;
	for(int i = 1; i <= limit; i++)
	{
		for(int j = 1; j <= save; j++)
			ary[i][j] = num, num += 2;
		--save;
	}
	save = 1;
	for(int i = n-limit+1; i <= n; i++)
	{
		for(int j = 1; j <= save; j++)
			ary[i][j] = num, num += 2;
		++save;
	}
	save = 1;
	for(int j = n-limit+1; j <= n; j++)
	{
		for(int i = n; i >= n-save+1; i--)
			ary[i][j] = num, num += 2;
		++save;
	}
	save = 1;
	for(int j = n-limit+1; j <= n; j++)
	{
		for(int i = 1; i <= save; i++)
			ary[i][j] = num, num += 2;
		++save;
	}
}
//even
num = 2;
for(int i = 1; i <= n; i++)
	for(int j = 1; j <= n; j++)
		if(ary[i][j] == 0)
			ary[i][j] = num, num += 2;
//done
for(int i = 1; i <= n; i++)
{
	for(int j = 1; j <= n; j++)
		cout<<ary[i][j]<<" ";
	cout<<endl;
}
/*
for(int i = 1; i <= n; i++)
{
	for(int j = 1; j <= n; j++)
		if(ary[i][j]&1)
			cout<<"O ";
		else
			cout<<"E ";
	cout<<endl;
}
*/

return 0;}