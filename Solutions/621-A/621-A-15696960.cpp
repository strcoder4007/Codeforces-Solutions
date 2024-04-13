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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
#define int long long
using namespace std;

int n, sum;
vector<int>myvec;

main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    myvec.pb(xs);
    sum += xs;
}
if(!(sum&1))
    cout<<sum<<endl;
else
{
    sort(myvec.begin(), myvec.end());
    for(int i = 0; i < n; i++)
    {
        if(myvec[i]&1)
        {
            cout<<sum-myvec[i]<<endl;
            return 0;
        }
    }
}

}