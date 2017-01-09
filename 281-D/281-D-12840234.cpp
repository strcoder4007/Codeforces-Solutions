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
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define INT_MAX 1e4+1
typedef long long LL;
using namespace std;

long n,ar[200000];
stack<long> s;
long ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
for (int i=0;i<n;i++)
{
 cin>>ar[i];
 while (s.size()>0&&s.top()<ar[i])
 s.pop();

 if (s.size()>0)
 ans=max(ans,ar[i]^s.top());

 s.push(ar[i]);
}

reverse(ar,ar+n);

for (int i=0;i<n;i++)
{
// cin>>ar[i];
 while (s.size()>0&&s.top()<ar[i])
 s.pop();

 if (s.size()>0)
 ans=max(ans,ar[i]^s.top());

 s.push(ar[i]);
}

cout<<ans<<endl;
}