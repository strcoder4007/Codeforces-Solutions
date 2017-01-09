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

int n, m, audio[200010], subs[200010];
vector<pair<pair<int, int>, int> >myvec;
map<int, int>mymap;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
	int xs; cin>>xs;
	++mymap[xs];
}
cin>>m;
for(int i = 0; i < m; i++)
	cin>>audio[i];
for(int i = 0; i < m; i++)
	cin>>subs[i], myvec.pb(mp(mp(mymap[audio[i]], mymap[subs[i]]), i));

sort(myvec.begin(), myvec.end());
cout<<myvec[myvec.size()-1].S+1<<endl;

return 0;}