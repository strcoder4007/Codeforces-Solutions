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

vector<string> myvec;
string junk1, junk2;
int startx, starty, destx, desty;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>junk1>>junk2;
startx = junk1[1]-48, starty = junk1[0]-96;
destx = junk2[1]-48, desty = junk2[0]-96;
while(startx != destx && starty != desty)
{
    if(startx < destx && starty < desty)
        ++startx, ++starty, myvec.pb("RU");
    else if(startx < destx && starty > desty)
        ++startx, --starty, myvec.pb("LU");
    else if(startx > destx && starty < desty)
        --startx, ++starty, myvec.pb("RD");
    else if(startx > destx && starty > desty)
        --startx, --starty, myvec.pb("LD");
}
while(startx < destx)
    ++startx, myvec.pb("U");
while(startx > destx)
    --startx, myvec.pb("D");
while(starty < desty)
    ++starty, myvec.pb("R");
while(starty > desty)
    --starty, myvec.pb("L");
cout<<myvec.size()<<endl;
for(int i = 0; i < myvec.size(); i++)
    cout<<myvec[i]<<endl;
    /*
*/
return 0;}