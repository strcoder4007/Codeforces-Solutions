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

int n, m, c1, c2, c3, c4, ans1, ans2;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>c1>>c2>>c3>>c4;
cin>>n>>m;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    if(xs*c1 < c2)
        ans1 += xs*c1;
    else
        ans1 += c2;
}
if(ans1 > c3)
    ans1 = c3;
for(int i = 0; i < m; i++)
{
    int xs; cin>>xs;
    if(xs*c1 < c2)
        ans2 +=xs*c1;
    else
        ans2 += c2;
}
if(ans2 > c3)
    ans2 = c3;
if(ans1+ans2 > c4)
    cout<<c4<<endl;
else
    cout<<ans1+ans2<<endl;

return 0;}