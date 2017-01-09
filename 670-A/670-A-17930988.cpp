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

int n, fst, sec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
if(n == 1)
{
    cout<<0<<" "<<1<<endl;
    return 0;
}
fst = n/7;
fst *= 2;
if(n%7 == 6)
    ++fst;
n -= 2;
sec = 1;
sec += n/7;
sec *= 2;
if(n%7 == 6)
    ++sec;
cout<<min(fst, sec)<<" "<<max(fst, sec)<<endl;


return 0;}