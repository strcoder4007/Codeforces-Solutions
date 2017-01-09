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

int n, sum1, sum2, cnt1, cnt2;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int t, x, y;
    cin>>t>>x>>y;
    if(t == 1)
        sum1 += x, ++cnt1;
    else
        sum2 += x, ++cnt2;
}
cnt1 *= 10, cnt2 *= 10;
if(sum1 >= cnt1/2)
    cout<<"LIVE"<<endl;
else
    cout<<"DEAD"<<endl;
if(sum2 >= cnt2/2)
    cout<<"LIVE"<<endl;
else
    cout<<"DEAD"<<endl;

return 0;}