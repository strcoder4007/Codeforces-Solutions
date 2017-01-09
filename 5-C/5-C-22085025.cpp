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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
#define have wghwiejojgoejfoejfast
using namespace std;

string st;
int n, ans, d[1000010], c[1000010], cnt;
stack<int> mystack;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

getline(cin, st);
n = st.size();
for(int i = 0; i < n; i++)
    c[i] = d[i] = -1;
for(int i = 0; i < n; i++)
{
    if(st[i] == '(')
        mystack.push(i);
    else if(!mystack.empty())
    {
        d[i] = c[i] = mystack.top();
        mystack.pop();
        if(st[d[i]-1] == ')' && c[d[i]-1] != -1)
            c[i] = c[d[i]-1];
    }
}
for(int i = 0; i < n; i++)
    if(c[i] != -1)
        ans = max(ans, abs(i-c[i])+1);
for(int i = 0; i < n; i++)
    if(c[i] != -1 && (abs(i-c[i])+1) == ans)
        ++cnt;
cout<<ans<<" "<<max(cnt, 1)<<endl;


return 0;}