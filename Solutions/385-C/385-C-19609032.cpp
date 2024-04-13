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

long long n, found[10000010], q, save[10000010];
bool ary[10000010];

void esieve(long long num)
{
    for(long long i = 2; i <= num; i++)
        if(ary[i] == false)
        {
            long long ii = 2;
            save[i] += found[i];
            while(i*ii <= num)
            {
                save[i] += found[i*ii];
                ary[i*ii] = true, ++ii;
            }
        }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 0; i < n; i++)
{
    long long xs; cin>>xs;
    ++found[xs];
}
esieve(10000000);
for(long long i = 1; i <= 10000000; i++)
    save[i] += save[i-1];
cin>>q;
while(q--)
{
    long long l, r; cin>>l>>r;
    long long fst, sec;
    if(r > 10000000)
        fst = save[10000000];
    else
        fst = save[r];
    if((l-1) > 10000000)
        sec = save[10000000];
    else
        sec = save[l-1];
    cout<<fst-sec<<endl;
}

return 0;}