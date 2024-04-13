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

int n, k, ary[100010], lft, rht, cnt, found[130], minn;
set<char>myset;
string st;
map<char, int>mymap;
int nxt;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
minn = 2e9;
for(int i = 0; i < n; i++)
	myset.insert(st[i]);
k = myset.size();
if(k == 1)
{
	cout<<1<<endl;
	return 0;
}
for(int i = 0; i < n; i++)
{
	if(mymap[st[i]] == 0)
		++nxt, ary[i] = nxt, mymap[st[i]] = nxt;
	else
		ary[i] = mymap[st[i]];
}
for(int i = lft; i < n; i++)
	if(ary[i] != ary[lft])
	{
		lft = i-1;
		break;
	}
for(int i = lft; i < n; i++)
{
	++found[st[i]];
	if(ary[i] == k)
	{
		rht = i;
		break;
	}
}
while(rht < n)
{
	cnt = 0;
	for(int i = 64; i <= 123; i++)
		if(found[i])
			++cnt;
	if(cnt == k)
		minn = min(minn, rht-lft+1);
	--found[st[lft]];
	++lft;
	for(int i = lft; i < n; i++)
	{
		if(ary[i] != ary[lft])
		{
			lft = i-1;
			++found[st[lft]];
			break;
		}
		else
			--found[st[lft]];
	}
	cnt = 0;
	while(cnt != k && rht < n)
	{
		cnt = 0;
		for(int i = 64; i <= 123; i++)
			if(found[i])
				++cnt;
		if(cnt == k)
			break;
		++rht;
		++found[st[rht]];
	}
	if(cnt == k)
		minn = min(minn, rht-lft+1);
}
cout<<minn<<endl;

return 0;}