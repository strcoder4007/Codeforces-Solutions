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

long n;
string st,res;
long q;

int main(){
//freopen("input.txt","r", stdin);
ios_base::sync_with_stdio(0);

cin>>n;
res="<3";
for (int i=1;i<=n;i++)
{cin>>st;
res+=st;
res+="<3";}

cin>>st;
q=0;

for (int i=0;i<st.size();i++)
{
    if (q<res.size()&&st[i]==res[q])++q;
}
if (q==res.size())cout<<"yes"<<endl;
else cout<<"no"<<endl;

return 0;}