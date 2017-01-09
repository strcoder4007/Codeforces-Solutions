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

int n, ary[55], ans, q, times, nest;
string st, temp;
map<string, char> mymap;

int solve()
{
	++nest;
	for(char a = 'a'; a <= 'f'; a++)
	{
		st += a;
		if(st.size() < n)
			solve();
		if(st.size() == n)
			++times;
		temp = st;
		if(st.size() == n)
		{
			++times;
			int start = 1;
			while(st.size() > 1)
			{
				string ts = st.substr(0, 2);
				if(mymap.find(ts) != mymap.end())
				{
					st.erase(st.begin()), st.erase(st.begin());
					st = mymap[ts]+st;
				}
				else
					break;
			}
			if(st == "a")
				++ans;
		}
		int take = temp.size()-1;
		st = temp.substr(0, take);
	}
	if(nest == n)
		return 0;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>q;
while(q--)
{
	string s;
	char t;
	cin>>s>>t;
	mymap[s] = t;
}
int junk = solve();
cout<<ans<<endl;


return 0;}