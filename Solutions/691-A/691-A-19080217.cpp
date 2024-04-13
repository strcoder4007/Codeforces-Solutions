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

int n, z;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    if(xs == 0)
        ++z;
}
if(n == 1 && z)
{
    cout<<"NO"<<endl;
    return 0;
}
if(n == 1 && z == 0)
{
    cout<<"YES"<<endl;
    return 0;
}
if(z != 1)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;



return 0;}