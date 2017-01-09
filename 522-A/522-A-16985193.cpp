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

int n, cnt, maxx, num;
vector<int>adj[210];
map<string, int> mymap;

string tolow(string x)
{
    for(int i = 0; i < x.size(); i++)
        if(x[i] < 96 && x[i] > 58)
            x[i] += 32;
    return x;
}

void dfs(int x)
{
    ++cnt;
    if(x == 0)
        return;
    for(int i = 0; i < adj[x].size(); i++)
            dfs(adj[x][i]);
}


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
mymap["polycarp"] = num;
for(int i = 0; i < n; i++)
{
    string fst, sec, thr;
    cin>>fst>>sec>>thr;
    fst = tolow(fst);
    thr = tolow(thr);
    if(mymap.find(fst) == mymap.end())
        ++num, mymap[fst] = num;
    //adj[mymap[thr]].pb(mymap[fst]);
    adj[mymap[fst]].pb(mymap[thr]);
}
for(int i = 1; i <= num; i++)
{
    cnt = 0;
    dfs(i);
    maxx = max(maxx, cnt);
}
cout<<maxx<<endl;


return 0;}