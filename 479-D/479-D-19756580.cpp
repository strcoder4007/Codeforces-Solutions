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

map<int, int>mymap;
int n, l, x, y, ary[100010], num;
bool foundx, foundy;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>l>>x>>y;
for(int i = 0; i < n; i++)
{
	cin>>ary[i];
	++mymap[ary[i]];
}
for(int i = 0; i < n; i++)
{
	if(mymap[ary[i]+x])
		foundx = true;
	if(mymap[ary[i]+y])
		foundy = true;
}
if(foundx && foundy)
{
	cout<<0<<endl;
	return 0;
}
if(foundx && !foundy)
{
	cout<<1<<endl<<ary[0]+y<<endl;
	return 0;
}
if(!foundx && foundy)
{
	cout<<1<<endl<<ary[0]+x<<endl;
	return 0;
}

for(int i = 0; i < n; i++)
{
	num = ary[i]+y;
	if(num < 0 || num > l)
		continue;
	if(mymap[num-x] || mymap[num+x])
	{
		cout<<1<<endl;
		cout<<num<<endl;
		return 0;
	}
}
for(int i = 0;  i <n; i++)
{
	num = ary[i]-y;
	if(num < 0 || num > l)
		continue;
	if(mymap[num-x] || mymap[num+x])
	{
		cout<<1<<endl;
		cout<<num<<endl;
		return 0;
	}
}
for(int i = 0; i < n; i++)
{
	num = ary[i]+x;
	if(num < 0 || num > l)
		continue;
	if(mymap[num-y] || mymap[num+y])
	{
		cout<<1<<endl;
		cout<<num<<endl;
		return 0;
	}
}
for(int i = 0; i  <n; i++)
{
	num = ary[i]-x;
	if(num < 0 || num > l)
		continue;
	if(mymap[num-y] || mymap[num+y])
	{
		cout<<1<<endl;
		cout<<num<<endl;
		return 0;
	}
}
cout<<2<<endl;
cout<<ary[0]+x<<" "<<ary[0]+y<<endl;

return 0;}