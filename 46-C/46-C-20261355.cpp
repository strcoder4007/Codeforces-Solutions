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

int n, sum, ans, tots, start;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
for(int i = 0; i < n; i++)
	if(st[i] == 'H')
		++tots;

ans=2e9;
for(int j = 0; j < n; j++)
{
	sum = 0, start = j;
	for(int i = 1; i <= tots; i++)
	{
    	if(st[start] == 'T')
			++sum;
    	++start;
		if(start == n)
			start=0;
	}
	ans = min(ans,sum);
}
cout<<ans<<endl;

return 0;}