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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

string st, a, c;
int n, start;
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 0; i < n; i++)
{
    if(st[i] == '.')
    {
        found = true;
        continue;
    }
    if(!found)
        a += st[i];
    if(found)
        c += st[i];
}
start = 0;
while(a[start] == '0' && start < a.size())
    ++start;
a = a.substr(start, a.size()-start);
start = c.size()-1;
while(c[start] == '0' && start > -1)
    --start;
c = c.substr(0, start+1);
if(a == "" && c == "")
    cout<<0<<endl;
else if(a == "" && c != "")
{
    start = 0;
    while(c[start] == '0' && start < c.size())
        ++start;
    c = c.substr(start, c.size()-start);
    cout<<c[0];
    int save = start+1;
    c.erase(0, 1);
    start = c.size()-1;
    while(c[start] == '0' && start > -1)
        --start;
    c = c.substr(0, start+1);
    if(c != "")
        cout<<"."<<c;
    cout<<"E-"<<save<<endl;
}
else if(a != "" && c == "")
{
    cout<<a[0];
    a.erase(0, 1);
    string save = a;
    start = a.size()-1;
    while(a[start] == '0' && start > -1)
        --start;
    a = a.substr(0, start+1);
    if(a != "")
        cout<<"."<<a<<"E"<<save.size()<<endl;
    else if(save == "")
        cout<<endl;
    else
        cout<<"E"<<save.size()<<endl;
}
else if(a != "" && c != "")
{
    if(a.size() == 1)
    {
        cout<<a<<"."<<c<<endl;
        return 0;
    }
    cout<<a[0];
    a.erase(0, 1);
    cout<<"."<<a<<c<<"E"<<a.size()<<endl;
}

return 0;}