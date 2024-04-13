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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;
using namespace std;

long n,ar[20000];
long fl;

bool inter(long x1,long y1,long x2,long y2)
{
     if (x1>y1)swap(x1,y1);
     if (x2>y2)swap(x2,y2);
     if (x2>x1){swap(x1,x2);swap(y1,y2);}
     if (x1>x2&&x1<y2&&y1>y2)return true;
     return false;
}
int main(){
//freopen("in.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for (int i=0;i<n;i++)
cin>>ar[i];
for (int i=0;i<n-1;i++)
 for (int j=0;j<n-1;j++)
 if (inter(ar[i],ar[i+1],ar[j],ar[j+1]))fl=1;
 if (fl)cout<<"yes"<<endl;
 else cout<<"no"<<endl;

return 0;}