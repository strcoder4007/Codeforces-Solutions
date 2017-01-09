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
#include <limits.h>
#include <stdlib.h>

#define F first
#define endl "\n"
#define S second
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define pi 3.141592653589793
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
using namespace std;

string s;
int n;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

getline(cin, s);
n = s.size();

if(s[n-1] == 'k')
{
    int day = s[0]-48;
    if(day == 5 || day == 6)
        cout<<53<<endl;
    else
        cout<<52<<endl;
}
else
{
    int day = (s[0]-48)*10+(s[1]-48);
    if(day == 31)
        cout<<7<<endl;
    else if(day == 29)
        cout<<12<<endl;
    else if(day == 30)
        cout<<11<<endl;
    else
        cout<<12<<endl;
}

return 0;}