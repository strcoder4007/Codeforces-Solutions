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
using namespace std;

int n, q, ary[150010], kind, idx, k;
set<int>myset;
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k>>q;
for(int i = 1; i <= n; i++)
{
    int xs;
    cin>>xs;
    ary[i] = 1000000001-xs;
}
while(q--)
{
    found = false;
    cin>>kind>>idx;
    if(kind == 1)
        myset.insert(ary[idx]);
    else
    {
        int dx = 1;
        for(set<int>::iterator ii = myset.begin(); ii != myset.end(); ii++)
        {
            if(dx > k)
                break;
            if(*ii == ary[idx])
            {
                found = true;
                break;
            }
            ++dx;
        }
        if(!found)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

return 0;}