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

#define left aldghwoir
#define right khdgir
int a, ta, b, tb, hr, mn, tots, right, left, ans;
string st;
char junk;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>ta>>b>>tb>>hr>>junk>>mn;
tots = hr*60+mn;
right = tots-tb+1;
left = tots+ta-1;
for(int i = 5*60; i < 24*60; i+=b)
	ans += right <= i and i <= left;
cout<<ans<<endl;

return 0;}