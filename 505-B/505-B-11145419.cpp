#include <bits/stdc++.h>
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repp(i, a, b) for (int i = (a);i < (b); ++i)
#define ri(x) scanf("%d", &(x))
#define rii(x, y) scanf("%d%d", &(x), &(y))
#define riii(x, y, z) scanf("%d%d%d", &(x), &(y), &(z))
#define dri(x) int (x); scanf("%d", &x)
#define drii(x, y) int x, y; scanf("%d%d", &x, &y)
#define driii(x, y, z) int x, y, z; scanf("%d%d%d", &x, &y, &z)
#define rs(x) scanf("%s", (x))
#define case(t) int t; cin>>t; while (t-- > 0)
#define mp make_pair
#define pb push_back
#define ms0(x) memset((x), 0, sizeof((x)))
#define ms1(x) memset((x), -1, sizeof((x)))
#define len(x) strlen(x)
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
#define pll pair<long long,long long>
#define fr first
#define sc second
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
const double sqt2=sqrt(2);

vpii g[105];
int vis[105];

bool dfs(int u, int node, int v)
{
  vis[u] = 1;
  if(u == v)
    return 1;
  rep(i, g[u].size())
  {
    pii e = g[u][i];
    if(e.sc == node && !vis[e.fr])
    {
      if(dfs(e.fr, node, v))
        return true;
    }
  }
  return false;
}

int main(void)
{
  drii(n, m);
  rep(i, m)
  {
    driii(a, b, c);
    --a;--b;--c;
    g[a].pb(mp(b, c));
    g[b].pb(mp(a, c));
  }
  case(q)
  {
    drii(u, v);
    --u, --v;
    int res = 0;
    rep(i, 100){
    ms0(vis);
    if(dfs(u, i, v))
      ++res;
    }
    cout<<res<<endl;
  }
}