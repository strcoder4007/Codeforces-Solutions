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
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n;
bool found;
vector<string>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
	string st;
	cin>>st;
	if(st[0] == 'O' && st[1] == 'O' && !found)
		st[0] = '+', st[1] = '+', found = true;
	else if(st[3] == 'O' && st[4] == 'O' && !found)
		st[3] = '+', st[4] = '+', found = true;
	myvec.pb(st);
}
if(!found)
	cout<<"NO"<<endl;
else
{
	cout<<"YES"<<endl;
	for(int i = 0; i < myvec.size(); i++)
		cout<<myvec[i]<<endl;
}

return 0;}