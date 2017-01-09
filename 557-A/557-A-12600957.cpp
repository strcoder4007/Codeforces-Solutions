#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <limits.h>
#include <string>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <assert.h>
#include <cstring>
using namespace std;
#define rep(i, n) for (int (i) = 0, j123 = n; (i) < j123; (i) ++)
#define rep1(i, n) for (int (i) = 1, j123 = n; (i) <= j123; (i) ++)
#define db(x) {cout << #x << " = " << (x) << endl;}
#define dba(a, x, y) {cout << #a << " :";for(int i123=(x);i123<=(y);i123++) cout<<setw(4)<<(a)[i123];cout<<endl;}
#define clr(x) memset(x,0,sizeof(x));
#define mp make_pair
#define pb push_back
#define sz(x) int(x.size())
#define endl '\n'
typedef long long ll;
typedef long double ld;
const int INF = INT_MAX;
const ll INFL = LLONG_MAX;
const ld pi = acos(-1);
// const int MOD = ;

int N;
int mn[10];
int mx[10];
int ans[10];
int tot()
{
  int x = 0;
  rep1(i,3) x += ans[i];
  return x;
}
int main()
{
  ios_base::sync_with_stdio(0); cout.precision(15); cout << fixed; cout.tie(0); cin.tie(0);
  cin >> N;
  rep1(i,3) cin >> mn[i] >> mx[i];
  rep1(i,3) ans[i] = mn[i];
  rep1(i,3)
  {
    while (tot() < N && ans[i] < mx[i])
      ans[i]++;
  }
  rep1(i,3) cout << ans[i] << (i+1<=3?' ':'\n');
}