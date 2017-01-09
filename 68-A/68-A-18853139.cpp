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
#define MOD 1000000009
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int p1, p2, p3, p4, a, b, cnt, ans, num;
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>p1>>p2>>p3>>p4>>a>>b;
myvec.pb(p1), myvec.pb(p2), myvec.pb(p3), myvec.pb(p4);
sort(myvec.begin(), myvec.end());
for(int i = a; i <= b; i++)
{
    cnt = 0, num = i;
    do
    {
        for(int j = 0; j < 4; j++)
            num %= myvec[j];
        if(num == i)
            ++cnt;
    } while(next_permutation(myvec.begin(), myvec.end()));
    if(cnt >= 7)
        ++ans;
}
cout<<ans<<endl;

return 0;}