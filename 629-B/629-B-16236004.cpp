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

int n, l, r, cnt, maxx, male[400], female[400];
char gender;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    cin>>gender;
    if(gender == 'M')
    {
        cin>>l>>r;
        for(int j = l;  j<= r; j++)
            ++male[j];
    }
    else
    {
        cin>>l>>r;
        for(int j = l; j <= r; j++)
            ++female[j];
    }
}
maxx = -1;
for(int i = 1; i <= 366; i++)
{
    if(male[i] != 0 && female[i] != 0)
        cnt = min(male[i], female[i]);
    maxx = max(maxx, cnt);
}
cout<<2*maxx<<endl;

return 0;}