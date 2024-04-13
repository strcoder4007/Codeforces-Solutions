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
#define minn(xxx, yyy, zzz) min(xxx, min(yyy, zzz))
using namespace std;

int x, o, cnt, xx, y;
char ch;
vector<string>myvec;
bool found, fst, sec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

myvec.pb("****");
for(int i = 1; i <= 3; i++)
{
	string st;
	cin>>st;
	st = '*'+st;
	myvec.pb(st);
	for(int j = 1; j <= 3; j++)
	{
		if(myvec[i][j] == 'X')
			++xx;
		else if(myvec[i][j] == '0')
			++o;
		else
			found = true;
	}
}
if(((xx-o) > 1) || (o > xx))
{
	cout<<"illegal"<<endl;
	return 0;
}
x = 1;
if(myvec[x][x] == 'X')
	ch = 'X';
else if(myvec[x][x] == '0')
	ch = '0';
cnt = 0;
while(x <= 3 && myvec[x][x] == ch)
	++cnt, ++x;
if(cnt == 3)
{
	if(ch == 'X')
		fst = true;
	else
		sec = true;
}
x = 1, y = 3;
if(myvec[x][y] == 'X')
	ch = 'X';
else if(myvec[x][y] == '0')
	ch = '0';
cnt = 0;
while(x <= 3 && y >= 1 && myvec[x][y] == ch)
	++cnt, ++x, --y;
if(cnt == 3)
{
	if(ch == 'X')
		fst = true;
	else
		sec = true;
}
for(int i = 1; i <= 3; i++)
{
	ch = myvec[i][1];
	cnt = 1;
	for(int j = 2; j <= 3; j++)
		if(myvec[i][j] == ch)
			++cnt;
	if(cnt == 3 && (ch == 'X' || ch == '0'))
	{
		if(ch == 'X')
			fst = true;
		else
			sec = true;
	}
}
for(int j = 1; j <= 3; j++)
{
	ch = myvec[1][j];
	cnt = 1;
	for(int i = 2; i <= 3; i++)
		if(myvec[i][j] == ch)
			++cnt;
	if(cnt == 3 && (ch == 'X' || ch == '0'))
	{
		if(ch == 'X')
			fst = true;
		else
			sec = true;
	}
}
if(fst && sec)
{
	cout<<"illegal"<<endl;
	return 0;
}
else if(fst)
{
	if(xx <= o)
		cout<<"illegal"<<endl;
	else
		cout<<"the first player won"<<endl;
	return 0;
}
else if(sec)
{
	if(xx > o)
		cout<<"illegal"<<endl;
	else
		cout<<"the second player won"<<endl;
	return 0;
}
if(xx > o && found)
{
	cout<<"second"<<endl;
	return 0;
}
if(xx <= o && found)
{
	cout<<"first"<<endl;
	return 0;
}
cout<<"draw"<<endl;




return 0;}