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


string st;
long long a,b,s,pw;
long found[1000010], ans;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);


cin>>st>>a>>b;
for(int i = 0; i < st.size(); i++)
{
    s = s*10+st[i]-48;
    if(s % a == 0)
        found[i+1] = 1;
    s %= a;
}

s=0, pw=1;
for(int i = st.size()-1; i+1; --i)
{
    s = s+pw*(st[i]-48);
    s %= b;
    if(s == 0 && st[i] > '0')
        found[i]++;
    pw *= 10;
    pw %= b;
}
ans = -1;
for(int i = 0; i < st.size(); i++)
    if(found[i] == 2)
        ans = i;
if(ans == -1)
    cout<<"NO"<<endl;
else
{
    cout<<"YES"<<endl;
    for(int i = 0; i < ans; i++)
        cout<<st[i];
    cout<<endl;
    for(int i = ans; i < st.size(); i++)
        cout<<st[i];
    cout<<endl;
 }

return 0;}