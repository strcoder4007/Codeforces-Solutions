#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <limits>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define INF_LL 9223372036854775807
#define INF 2000000000
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a) memset(a,-1,sizeof(a))

using namespace std;

pair<int,int> A[105];
vector<int> ans;

int main()
{
    int n,days;
    cin >> n >> days;
    for(int i=0;i<n;i++)
        scanf("%d",&A[i].first),A[i].second = i;
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        if(days < A[i].first)
            break;
        ans.push_back(A[i].second + 1);
        days-=A[i].first;
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(int i=0;i<ans.size();i++)
    {
        if(i) printf(" ");
        printf("%d",ans[i]);
    }
    return 0;
}