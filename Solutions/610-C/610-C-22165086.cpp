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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
#define have wghwiejojgoejfoejfast
using namespace std;

int k, start, last[520][520];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>k;
last[1][1] = 0;
for(int i = 1; i <= k; i++)
{
    start = 1<<(i-1);
    for(int j = 1; j <= start; j++)
        for(int k = start+1; k <= 2*start; k++)
            last[j][k] = last[j][k-start];
    for(int j = start+1; j <= 2*start; j++)
        for(int k = 1; k <= start; k++)
            last[j][k] = last[j-start][k];
    for(int j = start+1; j <= 2*start; j++)
        for(int k = start+1; k <= 2*start; k++)
            last[j][k] = 1^(last[j-start][k-start]);
}
for(int i = 1; i <= (1<<k); i++)
{
    for(int j = 1; j <= (1<<k); j++)
        if(last[i][j] == 0)
            cout<<'*';
        else
            cout<<'+';
    cout<<endl;
}

return 0;}