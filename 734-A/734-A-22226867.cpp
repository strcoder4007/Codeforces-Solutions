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

int n, a, d;
string st;

int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
for(int i = 0; i < n; i++)
{
    if(st[i] == 'A')
        ++a;
    else
        ++d;
}
if(a == d)
{
    cout<<"Friendship"<<endl;
}
else if(a > d)
    cout<<"Anton"<<endl;
else
    cout<<"Danik"<<endl;

return 0;}