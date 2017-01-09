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

#define left kjdfshnvoavaofobpj
#define right kjdfshnvoavaofobij

int n, left, right, ans, idx;
vector<pair<int, int> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int l, r; cin>>l>>r;
    myvec.pb(mp(l, r));
    left += l, right += r;
}
ans = abs(left-right);
for(int i = 0; i < n; i++)
{
    left -= (myvec[i].F-myvec[i].S);
    right -= (myvec[i].S-myvec[i].F);
    if(ans < abs(left-right))
        ans = abs(left-right), idx = i+1;
    left -= (myvec[i].S-myvec[i].F);
    right -= (myvec[i].F-myvec[i].S);
}
cout<<idx<<endl;


return 0;}