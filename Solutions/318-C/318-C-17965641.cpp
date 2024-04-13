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

long long a, b, m, cnt;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b>>m;
if(a >= m || b >= m)
{
	cout<<0<<endl;
	return 0;
}
if(a <= 0 && b <= 0)
{
	cout<<-1<<endl;
	return 0;
}
if(a > b)
	swap(a, b);
if(a < 0)
{
	cnt = abs(a)/b;
	a += cnt*b;
}
while(a < m && b < m)
{
	if(a < b)
		a += b;
	else
    	b += a;
    ++cnt;
}
cout<<cnt<<endl;

return 0;}