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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

int n, hour, minutes, hr, mit, add;
string st, s, t;
bool found, inwhile;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 0; i < n; i++)
{
	if(found && st[i] != ':')
		t += st[i];
	while(st[i] != ':' && !found)
		s += st[i], inwhile = true, ++i;
	if(inwhile)
		found = true;
}
hour = atoi(s.c_str());
minutes = atoi(t.c_str());
cin>>add;
hr = add/60;
mit = add%60;
minutes += mit;
if(minutes >= 60)
	++hour, minutes %= 60;
hour += hr;
if(hour >= 24)
	hour %= 24;

if(hour < 10)
	cout<<"0"<<hour<<":";
else
	cout<<hour<<":";
if(minutes < 10)
	cout<<"0"<<minutes<<endl;
else
	cout<<minutes<<endl;

return 0;}