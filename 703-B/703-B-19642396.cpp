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

long long n, k, ary[100010], sum, kk[100010], ans, save[100010], found[100010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
for(long long i = 1; i <= n; i++)
{
	cin>>ary[i];
	sum += ary[i];
}
for(long long i = 1; i <= k; i++)
{
	cin>>kk[i];
	save[i] = kk[i];
}
for(long long i = 1; i <= k; i++)
{
	sum -= ary[kk[i]];
	ans += sum*ary[kk[i]];
}
sort(save+1, save+k+1);
for(long long i = 1; i <= n; i++)
{
	long long lt, mid, rt, num1 = i-1, num2 = i+1;
	if(num1 == 0)
		num1 = n;
	if(num2 == n+1)
		num2 = 1;
	lt = upper_bound(save+1, save+k+1, num1)-save-1;
	mid = upper_bound(save+1, save+k+1, i)-save-1;
	rt = upper_bound(save+1, save+k+1, num2)-save-1;
	//cout<<"["<<i<<" "<<num1<<" "<<num2<<"]"<<" "<<ary[i]<<" "<<ary[save[mid]]<<endl;
	if(i != save[mid])
	{
		//cout<<i<<" "<<num1<<" "<<num2<<endl;
		if(num1 != save[lt] && !found[num1])
		{
			ans += ary[num1]*ary[i];
			//cout<<num1<<"*"<<i<<" ";
			//cout<<"ans += "<<ary[num1]*ary[i]<<endl;
		}
		if(num2 != save[rt] && !found[num2])
		{
			ans += ary[num2]*ary[i];
			//cout<<num2<<"*"<<i<<" ";
			//cout<<"ans += "<<ary[num2]*ary[i]<<endl;
		}
		found[i] = 1;
		/*
		//cout<<i<<" "<<num1<<"*"<<i<<" & "<<num2<<"*"<<i<<" ";
		//cout<<"num1 = "<<num1<<" save[lt] = "<<save[lt]<<" ";
		//cout<<"num2 = "<<num2<<" save[rt] = "<<save[rt]<<endl;
		*/
	}
}
cout<<ans<<endl;

return 0;}