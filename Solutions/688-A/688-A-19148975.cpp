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

int n, d, cnt, ans;
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>d;
for(int i = 0; i < d; i++)
{
	string st;
	cin>>st;
	found = false;
	for(int j = 0; j < st.size(); j++)
		if(st[j] == '0')
			found = true;
	if(found)
		++cnt;
	else
		ans = max(ans, cnt), cnt = 0;
}
ans = max(ans, cnt);
cout<<ans<<endl;


return 0;}