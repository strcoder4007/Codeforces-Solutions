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

string st, ts;
int n, save, start;
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
ts = st;
for(int i = 0; i < n; i++)
{
	save = i;
	start = i;
	while(st[save] != 'a' && save < n)
		++save, found = true;
	if(found)
	{
		for(int j = start; j < save; j++)
			--st[j];
		cout<<st<<endl;
		return 0;
	}
}
if(st == ts)
	st[n-1] = 'z';
cout<<st<<endl;

return 0;}