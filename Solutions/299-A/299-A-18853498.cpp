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
#define MOD 1000000009
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, ary[100010], minn;
bool error;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
minn = INT_MAX;
for(int i = 0; i < n; i++)
    cin>>ary[i];
for(int i = 0; i < n; i++)
    minn = min(minn, ary[i]);
for(int i = 0; i < n; i++)
    if(ary[i]%minn != 0)
        error = true;
if(error)
    cout<<-1<<endl;
else
    cout<<minn<<endl;


return 0;}