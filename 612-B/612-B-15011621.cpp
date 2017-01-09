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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

long long n, sum;
int ary[200020], found[200020];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for(int i = 1; i <= n; i++)
{
    cin>>ary[i];
    found[ary[i]] = i;
}

for(int i = 2; i <= n; i++)
  sum += abs(found[i]-found[i-1]);
cout<<sum<<endl;


return 0;}