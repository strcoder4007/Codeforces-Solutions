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

unsigned long long n, ary[510][510], x, y, sum, sum2, ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(unsigned long long i = 0; i < n; i++)
	for(unsigned long long j = 0; j < n; j++)
	{
		cin>>ary[i][j];
		if(ary[i][j] == 0)
			x = i, y = j;
	}
if(n == 1)
{
	cout<<1<<endl;
	return 0;
}
for(unsigned long long i = 0; i < n; i++)
{
	if(i != x)
	{
		for(unsigned long long j = 0; j < n; j++)
			sum += ary[i][j];
		break;
	}
}
for(unsigned long long j = 0; j < n; j++)
	sum2 += ary[x][j];
ans = sum-sum2;
if(ans <= 0)
{
	cout<<-1<<endl;
	return 0;
}
ary[x][y] = sum-sum2;


for(unsigned long long i = 0; i < n; i++)
{
	sum2 = 0;
	for(unsigned long long j = 0; j < n; j++)
		sum2 += ary[i][j];
	if(sum != sum2)
	{
		cout<<-1<<endl;
		return 0;
	}
}


for(unsigned long long j = 0; j < n; j++)
{
	sum2 = 0;
	for(unsigned long long i = 0; i < n; i++)
		sum2 += ary[i][j];
	if(sum != sum2)
	{
		cout<<-1<<endl;
		return 0;
	}
}


sum2 = 0;
for(unsigned long long i = 0; i < n; i++)
	sum2 += ary[i][i];
if(sum != sum2)
{
		cout<<-1<<endl;
		return 0;
}

x = n-1;
sum2 = 0;
for(unsigned long long j = 0; j < n; j++)
{
	sum2 += ary[x][j];
	--x;
}
if(sum != sum2)
{
		cout<<-1<<endl;
		return 0;
}


if(ans > 1000000000000000000)
	cout<<-1<<endl;
else
	cout<<ans<<endl;



return 0;}