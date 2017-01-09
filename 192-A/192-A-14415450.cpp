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

long long n,q,flag;
vector<long> v;
set<long> s;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for (int i=0;i<50000;i++)
{
    q=i;
    q*=(i+1);q/=2;
    s.insert(q);
    v.push_back(q);
}
for (int i=0;i<v.size();i++)
     if (v[i]>0&&v[i]<n&&s.find(n-v[i])!=s.end())
       flag=1;
if(flag)
  cout<<"YES"<<endl;
else
  cout<<"NO"<<endl;

return 0;}