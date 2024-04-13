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

long long n, h, d, ary[100010], num, cnt;
bool inwhile;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>h>>d;
for(long long i = 0; i < n; i++)
	cin>>ary[i];
//cout<<"i num cnt"<<endl;
for(long long i = 0; i < n; i++)
{
	//cout<<i<<" "<<num<<" "<<cnt<<" --> ";
	inwhile = false;
	while(num+ary[i] <= h && i < n)
		num += ary[i], ++i, inwhile = true;
	if(inwhile)
		--i;
	else
		++cnt, num = 0, --i;
	cnt += num/d;
	num = num%d;
	//cout<<i<<" "<<num<<" "<<cnt<<endl;
}
if(num)
	++cnt;
cout<<cnt<<endl;

return 0;}