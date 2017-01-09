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

int n, a, b, d, start;
string st, aa, bb, dd;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
while(st[start] != '.' && start < n)
	aa += st[start], ++start;
a = atoi(aa.c_str());
++start;
while(st[start] != 'e' && start < n)
	dd += st[start], ++start;
++start;
while(start < n)
	bb += st[start], ++start;
b = atoi(bb.c_str());

cout<<a;

if(dd != "0")
{
	if(dd.size() > b)
	{
		start = 0;
		if(b == 0)
			cout<<'.'<<dd;
		else
		{
			while(start < dd.size())
			{
				cout<<dd[start];
				++start;
				if(start == b)
					cout<<'.';
			}
		}//else
	}
	else if(dd.size() < b)
	{
		b -= dd.size();
		cout<<dd;
		while(b--)
			cout<<0;
	}
	else
		cout<<dd;
}
else
{
	while(b--)
		cout<<0;
}
cout<<endl;


return 0;}