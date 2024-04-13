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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

long long n, m, color[100010], maxx;
set<long long>adj[100010];
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(long long i = 1; i <= n; i++)
    cin>>color[i];
while(m--)
{
    long long u, v;
    cin>>u>>v;
    if(color[u] == color[v])
        continue;
    found = true;
    adj[color[u]].insert(color[v]);
    adj[color[v]].insert(color[u]);
}
/*
for(int i = 1; i <= 100000; i++)
{
    if(adj[i].size() == 0)
        continue;
    cout<<i<<"-> ";
    for(set<long long>::iterator ii = adj[i].begin(); ii != adj[i].end(); ii++)
        cout<<*ii<<" ";
    cout<<endl;
}
*/

if(!found)
{
    cout<<*min_element(color+1, color+n+1)<<endl;
    return 0;
}

for(long long i = 1; i <= 100000; i++)
    if(maxx < adj[i].size())
        maxx = adj[i].size();

for(int i = 1; i <= 100000; i++)
    if(maxx == adj[i].size())
    {
        cout<<i<<endl;
        return 0;
    }

return 0;}