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

int n, effected[5010];
vector<int>ans;
vector<pair<int, int> >myvec, newvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
	int l, r;
	cin>>l>>r;
	myvec.pb(mp(l, r));
}
for(int i = 0; i < n; i++)
	for(int j = 0; j < n; j++)
	{
		if(i == j)
			continue;
		else if(myvec[i].F >= myvec[j].S || myvec[i].S <= myvec[j].F)
			continue;
		else
			newvec.pb(mp(i+1, j+1));
	}
for(int i = 0; i < newvec.size(); i++)
	++effected[newvec[i].F], ++effected[newvec[i].S];
for(int i = 1; i <= n; i++)
	if(effected[i] == newvec.size())
		ans.pb(i);
if(ans.size() == 0)
{
	cout<<0<<endl;
	return 0;
}
cout<<ans.size()<<endl;
for(int i = 0; i < ans.size(); i++)
	cout<<ans[i]<<" ";
cout<<endl;

return 0;}