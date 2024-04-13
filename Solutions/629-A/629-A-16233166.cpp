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

long long  n, cnt;
char ary[110][110];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
        cin>>ary[i][j];
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
        for(int k = j+1; k <= n; k++)
            if(ary[i][j] == 'C' && ary[i][k] == 'C' && j != k)
                ++cnt;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
        for(int k = j+1; k <= n; k++)
            if(ary[j][i] == 'C' && ary[k][i] == 'C' && j != k)
                ++cnt;
cout<<cnt<<endl;

return 0;}