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

bool ary[1200010];
int count1, count2, prime[1200010], pali[1200010], ans, p, q;
string st, ts;

void esieve(int num)
{
    for(int i = 2; i < num; i++)
        if(ary[i] == false)
        {
            int ii = 2;
            while(i*ii <= num)
                ary[i*ii] = true, ++ii;
        }
}
string to_str(int number)
{
    string result;
    stringstream convert;
    convert<<number;
    result = convert.str();
    return result;
}

int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

esieve(1200000);
ary[0] = ary[1] = true;
for(int i = 1; i <= 1200000; i++)
{
    if(ary[i] == false)
        ++count1;
    prime[i] = count1;
    st = to_str(i);
    ts = st;
    reverse(ts.begin(), ts.end());
    if(st == ts)
        ++count2;
    pali[i] = count2;
}
cin>>p>>q;
for(int i = 1; i <= 1200000; i++)
    if(q*prime[i] <= p*pali[i])
        ans = i;
cout<<ans<<endl;

return 0;}