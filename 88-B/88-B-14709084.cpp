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

using namespace std;

long quer;
long n,m,x,ans,cb[10000],fl;
string st;
char ar[100][100];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>m>>x;
for (int i=0;i<n;i++)
for (int j=0;j<m;j++)
cin>>ar[i][j];

for (int i=0;i<=1000;i++)
  cb[i]=10;

for (int i=0;i<n;i++)
for (int j=0;j<m;j++)
{
  if(ar[i][j]>='a'&&ar[i][j]<='z')
    cb[ar[i][j]]=1;
  for (int ii=0;ii<n;ii++)
    for (int jj=0;jj<m;jj++)
      if (ar[ii][jj]=='S')
        if (ar[i][j]>='a'&&ar[i][j]<='z')
          if ((ii-i)*(ii-i)+(jj-j)*(jj-j)>x*x)
            cb[ar[i][j]+'A'-'a']=min(cb[ar[i][j]+'A'-'a'],2l);
          else
            cb[ar[i][j]+'A'-'a']=1;
}
cin>>quer>>st;
for (int i=0;i<st.size();i++)
  if (cb[st[i]]>2)
    fl=1;
else if (cb[st[i]]==2)
  ++ans;
if (fl)
  cout<<-1<<endl;
else
  cout<<ans<<endl;

return 0;}