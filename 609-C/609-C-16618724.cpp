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
#include <stdlib.h>
#include <climits>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

int n, ary[100010], ans[100010], cnt, rem, final_ans, sum;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    cin>>ary[i];
    sum += ary[i];
}
cnt = sum/n;
rem = sum%n;
sort(ary, ary+n);
for(int i = 0; i < n; i++)
    ans[i] = cnt;
for(int i = n-1; i+1; i--)
{
    if(rem == 0)
        continue;
    ++ans[i];
    --rem;
}
for(int i = 0; i < n; i++)
    if(ary[i] > ans[i])
        final_ans += ary[i]-ans[i];
cout<<final_ans<<endl;


return 0;}