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

unsigned long long n, ncr[1010][1010];

void process()
{
	for(int i = 0; i <= 1001; i++)
	{
		ncr[i][i]=1;
		ncr[i][0]=1;
		for(int j = i-1; j>0; j--)
			ncr[i][j] = (ncr[i-1][j] + ncr[i-1][j-1]);
	}
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
process();
cout<<ncr[n][5]+ncr[n][6]+ncr[n][7]<<endl;

return 0;}