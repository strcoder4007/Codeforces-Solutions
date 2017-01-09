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

int n, sum, maxx, cnt;
bool error;
string ary[110];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
    cin>>ary[i];
for(int i = 97; i < 123; i++)
    for(int j = i+1; j < 123; j++)
    {
        sum = 0;
        for(int k = 0; k < n; k++)
        {
            cnt = 0;
            error = false;
            for(int xs = 0; xs < ary[k].size(); xs++)
                if(ary[k][xs] == i || ary[k][xs] == j)
                    ++cnt;
                else
                    error = true;
            if(!error)
                sum += cnt;
        }
        maxx = max(maxx, sum);
    }
cout<<maxx<<endl;



return 0;}