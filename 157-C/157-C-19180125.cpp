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

string st1, st2, z;
int sum, ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st1>>st2;
ans = 2e9;
for(int i = 0; i <= 2000; i++)
	z += "#";
st1 = z+st1+z;
for(int i = 0; i <= st1.size()-st2.size(); i++)
{
	sum = 0;
	for(int j = 0; j < st2.size(); j++)
	{
		if(st1[i+j] != st2[j])
			++sum;
	}
	ans = min(ans, sum);
}
cout<<ans<<endl;

return 0;}