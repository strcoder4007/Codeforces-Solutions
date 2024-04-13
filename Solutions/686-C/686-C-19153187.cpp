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

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, m, nn, mm, visited[10], ans;

int calc(int x)
{
	int res = 0; --x;
	while(x)
		x /= 7, ++res;
	return max(1, res);
}

void dfs(int ni, int mi, int na, int ma)
{
	if(ni < nn)
	{
		for(int i = 0; i < 7; i++)
			if(!visited[i])
				visited[i] = true, dfs(ni+1, mi, na*7+i, ma), visited[i] = false;
		return;
	}
	if(mi < mm)
	{
		for(int i = 0; i < 7; i++)
			if(!visited[i])
				visited[i] = true, dfs(ni, mi+1, na, ma*7+i), visited[i] = false;
		return;
	}
	if(na < n && ma < m)
		++ans;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
nn = calc(n);
mm = calc(m);
if(nn+mm > 7)
{
	cout<<0<<endl;
	return 0;
}
dfs(0, 0, 0, 0);
cout<<ans<<endl;

return 0;}