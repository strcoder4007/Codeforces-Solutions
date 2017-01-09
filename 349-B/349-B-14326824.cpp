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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

long rem,cost[20],temp,mcost,ans,bdig;

int main(){
//  freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>rem;
for (int i=1;i<=9;i++)
cin>>cost[i];
mcost=1000000;

for (int i=1;i<=9;i++)
if (cost[i]<mcost)mcost=cost[i];

ans=rem/mcost;
if (rem<mcost)cout<<-1<<endl;
else
{

for (int i=1;i<=ans;i++)
{
 bdig=-1;
 for (int j=1;j<=9;j++)
 {
     temp=rem-cost[j];
     if (temp<0)continue;
     if (temp/mcost+i>=ans)bdig=max(bdig,ans-ans+j);
 }
 cout<<bdig;
 rem-=cost[bdig];
}
cout<<endl;
}

return 0;}