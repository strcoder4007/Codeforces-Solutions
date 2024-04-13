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

int n, m, ary[100010], ans[100010];
vector<int>adj[100010];
bool error;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
{
    cin>>ary[i];
    adj[ary[i]].pb(i);
}
for(int i = 1; i <= m; i++)
{
    int val; cin>>val;
    if(adj[val].size() == 0)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(adj[val].size() > 1)
        error = true;
    ans[i] = adj[val][0];
}
if(error)
{
    cout<<"Ambiguity"<<endl;
    return 0;
}
cout<<"Possible"<<endl;
for(int i = 1; i <= m; i++)
    cout<<ans[i]<<" ";
cout<<endl;

return 0;}