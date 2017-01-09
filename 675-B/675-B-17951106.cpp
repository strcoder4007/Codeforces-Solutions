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

long long n, a, b, c, d, save, ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>a>>b>>c>>d;
long long ary[5] = {0, a+b+1, a+c+1, b+d+1, c+d+1};
for(long long i = 1; i <= n; i++)
{
	bool error = false;
	save = ary[1]+i;
	for(long long j = 2; j <= 4; j++)
		if(save <= ary[j] || save-ary[j] > n)
			error = true;
	if(!error)
		++ans;
}
cout<<ans*n<<endl;


return 0;}