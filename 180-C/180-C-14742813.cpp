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

string st;
long ans,tans;
long calc;

bool dn(char c)
{
     if (c<'a')return false;
     if (c>'z')return false;
     return true;
}
int main(){
cin>>st;
for (int i=0;i<st.size();i++)
if (dn(st[i]))++calc;
ans=calc;
tans=ans;
for (int i=st.size()-1;i+1;i--)
{
    if (dn(st[i]))--tans;
    else ++tans;
    ans=min(ans,tans);
   // cout<<tans<<" "<<ans<<endl;
}

cout<<ans<<endl;

cin.get();cin.get();
return 0;}