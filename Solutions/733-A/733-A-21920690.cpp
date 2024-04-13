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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
#define have wghwiejojgoejfoejfast
using namespace std;

int n, ans;
vector<int>myvec;
string st;


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
myvec.pb(0);
for(int i = 0; i < n; i++)
    if(st[i] == 'A' ||st[i] == 'E' ||st[i] == 'I' ||st[i] == 'O' ||st[i] == 'U' ||st[i] == 'Y')
        myvec.pb(i+1);
myvec.pb(n+1);
for(int i = 1; i < myvec.size(); i++)
    ans = max(ans, myvec[i]-myvec[i-1]);
cout<<ans<<endl;


return 0;}