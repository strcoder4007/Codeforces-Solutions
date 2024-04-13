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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
#define LL long long
using namespace std;

int b, g, t;
long long found[32][32], sum;

void ncr()
{
    for(int i=0;i<=30;i++)
    {
        found[i][i]=1;
        found[i][0]=1;
        for(int j=i-1;j>0;j--)
            found[i][j]=(found[i-1][j]+found[i-1][j-1]);
    }
}

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

ncr();
cin>>b>>g>>t;
for(int i = 4; i <= t; i++)
  if(t-i >= 1 && t-i <= g && i <= b)
    sum += found[b][i]*found[g][t-i];
cout<<sum<<endl;

return 0;}