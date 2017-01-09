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

long long n,m, cities[100010], towers[100010], ans, final_ans, new_ans;
long long start_c, end_c;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(long long i = 0; i < n; i++)
    cin>>cities[i];
for(long long i = 0; i < m; i++)
    cin>>towers[i];
start_c = 0, end_c = n-1;
if(towers[0] > cities[0])
{
    final_ans = max(final_ans, abs(towers[0]-cities[0]));
    start_c = upper_bound(cities, cities+n, towers[0])-cities;
}
if(towers[m-1] < cities[n-1])
{
    final_ans = max(final_ans, abs(towers[m-1]-cities[n-1]));
    end_c = upper_bound(cities, cities+n, towers[m-1])-cities-1;
}
//cout<<final_ans<<endl;
ans = 2e9;
for(long long i = start_c; i <= end_c; i++)
{
    long long up = upper_bound(towers, towers+m, cities[i])-towers;
    long long fst = abs(cities[i]-towers[up]), sec = abs(cities[i]-towers[up-1]);
    final_ans = max(final_ans, min(fst, sec));
    //cout<<fst<<" "<<sec<<endl;
}
cout<<final_ans<<endl;

return 0;}