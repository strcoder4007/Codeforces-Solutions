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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

set<pair<pair<int, int>, pair<int, int> > >myset;
int cnt, x1[5], y1[5], x2[5], y2[5], minx, miny, maxx, maxy ;
set<pair<int, int> >pairs;

string calc()
{
    if(pairs.size() != 4)
        return "NO";
    minx = x1[0], maxx = x1[0];
    for(int i=  0; i < 4; i++)
        minx = min(minx, x1[i]), maxx = max(maxx, x1[i]);
    for(int i=  0; i < 4; i++)
        minx = min(minx, x2[i]), maxx = max(maxx, x2[i]);
    miny = y1[0], maxy = y1[0];
    for(int i=  0; i < 4; i++)
        miny = min(miny, y1[i]), maxy = max(maxy, y1[i]);
    for(int i=  0; i < 4; i++)
        miny = min(miny, y2[i]), maxy = max(maxy, y2[i]);
    if((minx == maxx) || (miny == maxy))
        return "NO";
    if(myset.find(mp(mp(minx, miny), mp(minx, maxy))) == myset.end())
        return "NO";
    if(myset.find(mp(mp(minx, miny), mp(maxx, miny))) == myset.end())
        return "NO";
    if(myset.find(mp(mp(minx, maxy), mp(maxx, maxy))) == myset.end())
        return "NO";
    if(myset.find(mp(mp(maxx, maxy), mp(maxx, miny))) == myset.end())
        return "NO";
    return "YES";
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 0; i < 4; i++)
{
    cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    pairs.insert(mp(x1[i], y1[i]));
    pairs.insert(mp(x2[i], y2[i]));
    myset.insert(mp(mp(x1[i], y1[i]), mp(x2[i], y2[i])));
    myset.insert(mp(mp(x2[i], y2[i]), mp(x1[i], y1[i])));
}
cout<<calc()<<endl;

return 0;}