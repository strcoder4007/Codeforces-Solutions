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

long double fst, sec;
int a, b, c;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cout<<fixed;
cin>>a>>b>>c;
fst = ((-b)+(sqrt(b*b - 4*a*c)))/double(2*a);
sec = ((-b)-(sqrt(b*b - 4*a*c)))/double(2*a);
cout<<setprecision(6)<<max(fst, sec)<<endl<<min(fst, sec)<<endl;

return 0;}