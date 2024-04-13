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

int n, ary[55];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
	cin>>ary[i];
for(int i = 0; i < n; i++)
	for(int j = i+1; j < n; j++)
		for(int k = j+1; k < n; k++)
			if(abs(ary[i]-ary[j]) <= 2 && abs(ary[i]-ary[k]) <= 2 && abs(ary[k]-ary[j]) <= 2 && ary[i] != ary[j] && ary[i] != ary[k] && ary[j] != ary[k])
			{
				cout<<"YES"<<endl;
				return 0;
			}
cout<<"NO"<<endl;

return 0;}