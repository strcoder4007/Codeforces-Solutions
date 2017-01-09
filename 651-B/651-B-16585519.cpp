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
#include <stdlib.h>
#include <climits>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define M_pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

int n, found[1010], cnt;
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int xs; cin>>xs;
    myvec.pb(xs);
}
sort(myvec.begin(), myvec.end());
for(int i = 0; i < n; i++)
{
    if(!found[i])
    {
        int junk = myvec[i];
        found[i] = 1;
        for(int j = i+1; j < n; j++)
            if(junk < myvec[j] && !found[j])
                ++cnt, junk = myvec[j], found[j] = 1;
    }
}
cout<<cnt<<endl;

return 0;}