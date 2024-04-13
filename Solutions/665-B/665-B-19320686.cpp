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

int n, m, k, ary[110], saved[110], found[110], save, ans, xs;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
for(int i = 1; i <= k; i++)
{
	cin>>xs;
	ary[i] = xs;
	found[xs] = saved[xs] = i;
}
for(int i = 1; i <= n; i++)
{
	for(int j = 1; j <= m; j++)
	{
		cin>>xs;

		/*
		for(int ii = 1; ii <= k; ii++)
			cout<<found[ii]<<" ";
		cout<<endl;
		cout<<"item "<<xs<<" is on pos "<<found[xs]<<endl;
		*/

		save = found[xs];
		ans += save;
		for(int ii = 1; ii <= k; ii++)
		{
			if(found[ii] <= save)
				++found[ii];
			if(found[ii] > k)
				found[ii] = 1;
		}
		found[xs] = 1;

	}
}
cout<<ans<<endl;


return 0;}