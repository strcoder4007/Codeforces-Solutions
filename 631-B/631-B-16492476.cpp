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
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;



int n, m, k, rc, num, val;
map<int, pair<int, int> >row, col;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m>>k;
for(int i = 1; i <= k; i++)
{
    cin>>rc>>num>>val;
    if(rc == 1)
        row[num] = mp(val, i);
    else
        col[num] = mp(val, i);
}
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= m; j++)
        if(row[i].S > col[j].S)
            cout<<row[i].F<<" ";
        else
            cout<<col[j].F<<" ";
    cout<<endl;
}

return 0;}