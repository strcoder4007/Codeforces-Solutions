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

int n, r, g, b;
string st;


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
for(int i = 0; i < n; i++)
    if(st[i] == 'R')
        ++r;
    else if(st[i] == 'G')
        ++g;
    else
        ++b;
if(n == 1)
{
    cout<<st<<endl;
    return 0;
}

if(r > 0 && b > 0 && g > 0)
{
    cout<<"BGR"<<endl;
    return 0;
}

if(r > 0 && g == 0 && b == 0)
{
    cout<<"R"<<endl;
    return 0;
}
if(r == 0 && g > 0 && b == 0)
{
    cout<<"G"<<endl;
    return 0;
}
if(r == 0 && g == 0 && b > 0)
{
    cout<<"B"<<endl;
    return 0;
}

if(g == 0)
{
    if(r == 1 && b == 1)
    {
        cout<<"G"<<endl;
        return 0;
    }
    if(r == 1 && b > 1)
    {
        cout<<"GR"<<endl;
        return 0;
    }
    if(r > 1 && b == 1)
    {
        cout<<"BG"<<endl;
        return 0;
    }
    if(r > 1 && b > 1)
    {
        cout<<"BGR"<<endl;
        return 0;
    }
}

if(r == 0)
{
    if(g == 1 && b == 1)
    {
        cout<<"R"<<endl;
        return 0;
    }
    if(g == 1 && b > 1)
    {
        cout<<"GR"<<endl;
        return 0;
    }
    if(g > 1 && b == 1)
    {
        cout<<"BR"<<endl;
        return 0;
    }
    if(g > 1 && b > 1)
    {
        cout<<"BGR"<<endl;
        return 0;
    }
}
if(b == 0)
{
    if(r == 1 && g == 1)
    {
        cout<<"B"<<endl;
        return 0;
    }
    if(r == 1 && g > 1)
    {
        cout<<"BR"<<endl;
        return 0;
    }
    if(r > 1 && g == 1)
    {
        cout<<"BG"<<endl;
        return 0;
    }
    if(r > 1 && g > 1)
    {
        cout<<"BGR"<<endl;
        return 0;
    }
}


return 0;}