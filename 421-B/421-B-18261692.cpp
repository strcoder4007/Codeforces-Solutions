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

char ary[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
string st, ts;
int n;
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 0; i < n; i++)
{
	found = false;
	for(int j = 0; j < 11; j++)
		if(st[i] == ary[j])
			found = true;
	if(!found)
	{
		cout<<"NO"<<endl;
		return 0;
	}
}
ts = st;
reverse(ts.begin(), ts.end());
if(st == ts)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;


return 0;}