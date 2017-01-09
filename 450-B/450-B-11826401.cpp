#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <utility>
#include <sstream>
#include <map>
#include <set>
#include <cassert>
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int,int> PI;

const int inf=2000000000;
const LL INF=LL(inf)*inf;
const LL mod=1000000007LL;
double eps=1e-8;

#define pb push_back    
#define sc(x) scanf("%d",&(x))
#define scl(x) scanf("%lld",&(x))
#define N 100002

int main()
{
    LL x,y,n;
    LL A[6];
    scl(x);scl(y);
    A[1]=x;
    A[2]=y;
    A[3]=y-x;
    A[4]=-x;
    A[5]=-y;
    A[0]=x-y;
    scl(n);
    n=n%6;
    printf("%lld\n", (A[n]%mod+mod)%mod);
}