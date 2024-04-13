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

int n, ary[110], sum, found[110];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
	cin>>ary[i];
	sum += ary[i];
}
sum = sum/(n/2);
for(int i = 0; i < n; i++)
{
	if(!found[i])
	{
		found[i] = 1;
		for(int j = 0; j < n; j++)
			if(ary[j] == (sum-ary[i]) && !found[j])
			{
				found[j] = 1;
				cout<<i+1<<" "<<j+1<<endl;
				break;
			}
	}
}

return 0;}