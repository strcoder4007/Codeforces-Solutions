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

bool ary[5000010];
int t, a, b, found[5000010];
vector<int>myvec;

void solve()
{
    ary[1] = true;
    for(int i = 2;i <= 5000000; i++)
        if(!ary[i])
        {
            ++found[i];
            for(int j = i*2; j <= 5000000; j+=i)
            {
                int q = j;
                while (q%i == 0)
                    found[j]++, q/=i;
                ary[j] = true;
            }
        }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

solve();
for(int i = 2; i <= 5000000; i++)
    found[i] += found[i-1];
cin>>t;
while(t--)
{
    cin>>a>>b;
    cout<<found[a]-found[b]<<endl;
}

return 0;}