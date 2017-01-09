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
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
#define pll pair<long long,long long>
#define F first
#define S second
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
const double sqt2=sqrt(2);
int r, c;
char in[60][60];
bool check[60][60];
bool ans;
int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};

void dfs(int x, int y)
{
  check[x][y] = true;
  int i, b = 0;
  rep(i, 4)
    if(check[x+dx[i]][y+dy[i]] && in[x][y] == in[x+dx[i]][y+dy[i]])
      b++;
  if(b > 1)
    ans = true;
  rep(i, 4)
    if(!check[x+dx[i]][y+dy[i]] && in[x][y] == in[x+dx[i]][y+dy[i]])
      dfs(x+dx[i], y+dy[i]);  
}

 int main (void)
 {
   int i, j;
   rii(r, c);
  for(i = 1; i <= r; i++) 
    scanf("%s", in[i]+1);
  for(i = 0; i <= 51; i++)
    for(j = 0; j <= 51; j++)
      check[i][j] = true;
  for(i = 1; i <= r; i++)
    for(j = 1; j <= c; j++)
      check[i][j] = false;
  for(i = 1; i <= r; i++)
    for(j = 1; j <= c; j++)
      if(!check[i][j])
        dfs(i, j);
  if(ans)
    printf("Yes");
  else
    printf("No");
 }