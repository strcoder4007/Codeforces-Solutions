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

long n,m,a,c,usd[100],cl[200000];
long b,p;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for (int i=1;i<=m;i++)
{
    cin>>a>>b>>c;
    usd[1]=usd[2]=usd[3]=0;
    usd[cl[a]]=1;
    usd[cl[b]]=1;
    usd[cl[c]]=1;
    if (cl[a]!=0)
      usd[cl[a]]=1;
    else
    {
      p=1;
      while(usd[p])
        ++p;
      cl[a]=p;
      usd[p]=1;
    }
    if(cl[b]!=0)
      usd[cl[b]]=1;
    else
    {
      p=1;
      while(usd[p])
        ++p;
      cl[b]=p;
      usd[p]=1;
    }
    if(cl[c]!=0)
      usd[cl[c]]=1;
    else
    {
      p=1;
      while(usd[p])
        ++p;
      cl[c]=p;
      usd[p]=1;
    }
  // cout<<cl[a]<<" "<<cl[b]<<" "<<cl[c]<<endl;
}

for (int i=1;i<=n;i++)
{
    if (i-1)cout<<" ";
      cout<<cl[i];
    }
cout<<endl;

return 0;}