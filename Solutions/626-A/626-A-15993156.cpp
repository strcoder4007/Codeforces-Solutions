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

int cnt, n, up, down, rt, lt;
string st;


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
for(int i = 0; i < n; i++)
    for(int j = i+1; j < n; j++)
    {
        up = 0, lt = 0;
        for(int k = i; k <= j; k++)
        {
            if(st[k] == 'U')
                ++up;
            else if(st[k] == 'D')
                --up;
            else if(st[k] == 'L')
                ++lt;
            else if(st[k] == 'R')
                --lt;
        }
        if(up == 0 && lt == 0)
            ++cnt;
    }
cout<<cnt<<endl;

return 0;}