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

int n, ary[1001][1001], found[510], cnt;
priority_queue<pair<int, pair<int, int> > >pq;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
n <<= 1;
for(int i = 2; i <= n; i++)
    for(int j = 1; j < i; j++)
    {
        cin>>ary[i][j];
        pq.push(mp(ary[i][j], mp(i, j)));
    }
while(pq.size() && cnt != n)
{
    pair<int, pair<int, int> > xs = pq.top();
    pq.pop();
    if(!found[xs.S.F] && !found[xs.S.S])
        found[xs.S.F] = xs.S.S, found[xs.S.S] = xs.S.F, cnt += 2;
}
for(int i = 1; i <= n; i++)
    cout<<found[i]<<" ";
cout<<endl;

return 0;}