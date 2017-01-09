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


string st;
int n, k, cnt, maxx;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k>>st;
for(int i = 0; i < n; i++)
    cnt += max(st[i]-96-1, 26-(st[i]-96));
if(k > cnt)
{
    cout<<-1<<endl;
    return 0;
}
for(int i = 0; i < n; i++)
{
    int lt = 0;
    if(k == 0)
        break;
    maxx = max(st[i]-96-1, 26-(st[i]-96));
    if(st[i]-96-1 > 26-(st[i]-96))
        lt = 1;
    if(k > maxx)
    {
        k -= maxx;
        if(lt)
            st[i] -= maxx;
        else
            st[i] += maxx;
    }
    else
    {
        if(lt)
            st[i] -= k;
        else
            st[i] += k;
        k = 0;
    }
}
cout<<st<<endl;



return 0;}