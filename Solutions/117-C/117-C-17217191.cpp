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
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long ar[5050][5050];
string st;
vector<long> cycle;
long n, c_st, c_end, v1,v2,v3, p[5050], cl[5050];

bool dfs(long v)
{
 cl[v]=1;
 for (int i=0;i<n;i++)
 {
  if (ar[v][i]==0)continue;
  if (cl[i]==0)
  {
   p[i]=v;
   if (dfs(i))return true;
  }
  else if (cl[i]==1)
  {
   c_end=v;
   c_st=i;
   return true;
  }
 }
 cl[v]=2;
 return false;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
//cin.tie(0);

cin>>n;
for (int i=0;i<n;i++)
{
    cin>>st;
    for (int j=0;j<st.size();j++)
     ar[i][j]=st[j]-48;
}

c_st=-1;
for (int i=0;i<n;i++)
{
 if (dfs(i))break;
}

if (c_st==-1)
{
 cout<<-1<<endl;
 return 0;
}

long v=c_end;

while (v!=c_st)
{
 cycle.push_back(v);
 v=p[v];
}
cycle.push_back(v);
reverse(cycle.begin(),cycle.end());

while (cycle.size()>3)
{
 v1=cycle[0];
 v2=cycle[1];
 v3=cycle[2];
 if (ar[v3][v1]==1)
 {
  cycle.clear();
  cycle.push_back(v1);
  cycle.push_back(v2);
  cycle.push_back(v3);
 }
 else
 {
  cycle.erase(cycle.begin()+1);
 }
}

for (int i=0;i<cycle.size();i++)
{
 if (i)cout<<" ";
 cout<<cycle[i]+1;
}
cout<<endl;

return 0;}