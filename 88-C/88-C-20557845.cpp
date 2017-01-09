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

long long a, b, lcm, fst, sec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b;
lcm = (a*b)/__gcd(a, b);
fst = lcm/a;
sec = lcm/b;
if(a > b)
	--sec;
else
	--fst;
if(fst > sec)
	cout<<"Dasha"<<endl;
else if(fst < sec)
	cout<<"Masha"<<endl;
else
	cout<<"Equal"<<endl;

return 0;}