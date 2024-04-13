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

long long a, b, c, d, fst, sec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b>>c>>d;
if((b/(double)a) < (d/(double)c))
    swap(a, b), swap(c, d);
fst = b*c-a*d;
sec = b*c;
cout<<fst/__gcd(fst, sec)<<"/"<<sec/__gcd(fst, sec)<<endl;

return 0;}