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

int a1, a2, a3, b1, b2, b3;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a1>>b1>>a2>>b2>>a3>>b3;
if(a1 == a2 && a2 == a3)
    cout<<1<<endl;
else if(b1 == b2 && b2 == b3)
    cout<<1<<endl;
else if(a1 == a2)
{
    if(b1 > b2 && b3 > b2 && b3 < b1)
        cout<<3<<endl;
    else if(b1 < b2 && b3 > b1 && b3 < b2)
        cout<<3<<endl;
    else
        cout<<2<<endl;
}
else if(a1 == a3)
{
    if(b1 > b3 && b2 > b3 && b2 < b1)
        cout<<3<<endl;
    else if(b1 < b3 && b2 > b1 && b2 < b3)
        cout<<3<<endl;
    else
        cout<<2<<endl;
}
else if(a2 == a3)
{
    if(b2 > b3 && b1 > b3 && b1 < b2)
        cout<<3<<endl;
    else if(b2 < b3 && b1 > b2 && b1 < b3)
        cout<<3<<endl;
    else
        cout<<2<<endl;
}
else if(b1 == b2)
{
    if(a1 > a2 && a3 > a2 && a3 < a1)
        cout<<3<<endl;
    else if(a1 < a2 && a3 > a1 && a3 < a2)
        cout<<3<<endl;
    else
        cout<<2<<endl;
}
else if(b1 == b3)
{
    if(a1 > a3 && a2 > a3 && a2 < a1)
        cout<<3<<endl;
    else if(a1 < a3 && a2 > a1 && a2 < a3)
        cout<<3<<endl;
    else
        cout<<2<<endl;
}
else if(b2 == b3)
{
    if(a2 > a3 && a1 > a3 && a1 < a2)
        cout<<3<<endl;
    else if(a2 < a3 && a1 > a2 && a1 < a3)
        cout<<3<<endl;
    else
        cout<<2<<endl;
}
else
    cout<<3<<endl;


return 0;}