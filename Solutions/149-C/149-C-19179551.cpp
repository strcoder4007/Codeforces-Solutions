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

int n;
vector<int >fst, sec;
vector<pair<int, int> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
	int xs; cin>>xs;
	myvec.pb(mp(xs, i+1));
}
sort(myvec.begin(), myvec.end());
for(int i = 0; i < n; i++)
{
	if(i%2 == 0)
		fst.pb(myvec[i].S);
	else
		sec.pb(myvec[i].S);
}
cout<<fst.size()<<endl;
for(int i = 0; i < fst.size(); i++)
	cout<<fst[i]<<" ";
cout<<endl;
cout<<sec.size()<<endl;
for(int i = 0; i < sec.size(); i++)
	cout<<sec[i]<<" ";
cout<<endl;

return 0;}