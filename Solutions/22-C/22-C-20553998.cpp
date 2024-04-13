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
#define y1 cantstopaddictedtotheshindig
using namespace std;

int n, m, v, k, last;
vector<int> myvec;
map<pair<int, int> , int>mymap;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>v;
k = n-1;
if(m < k || m > (k*(k-1))/2+1)
{
	cout<<-1<<endl;
	return 0;
}
for(int i = 1; i <= n; i++)
	if(i != v)
	{
		last = i;
		myvec.pb(last);
		break;
	}
k = n;
if(v == n)
	k = n-1;
for(int i = 2; i < k; i++)
{
	if(i != v && last != v && i != last)
	{
		myvec.pb(i);
		mymap[mp(last, i)] = 1;
		cout<<last<<" "<<i<<endl;
		last = i;
	}
}
if(k == n-1)
{
	myvec.pb(v);
	mymap[mp(last, v)] = 1;
	mymap[mp(v, n-1)] = 1;
	cout<<last<<" "<<v<<endl;
	cout<<v<<" "<<n-1<<endl;
}
else
{
	myvec.pb(v);
	mymap[mp(last, v)] = 1;
	mymap[mp(v, n)] = 1;
	cout<<last<<" "<<v<<endl;
	cout<<v<<" "<<n<<endl;
}

m -= (n-1);
for(int i = 0; i < myvec.size(); i++)
{
	for(int j = i+1; j < myvec.size(); j++)
	{
		if(mymap[mp(myvec[i], myvec[j])] == 0 && m)
		{
			cout<<myvec[i]<<" "<<myvec[j]<<endl;
			mymap[mp(myvec[i], myvec[j])] = 1;
			--m;
		}
		if(m <= 0)
			break;
	}
	if(m <= 0)
		break;
}

return 0;}