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
#define driiii(w, x, y, z) int w, x, y, z; scanf("%d%d%d%d", &w, &x, &y, &z)
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
#define F first
#define S second
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
const double sqt2=sqrt(2);

int calc(int p, int t)
{
  int x = (3*p)/10;
  int y = p-((p/250)*t);
  return max(x, y);
}

int main(void)
{
  driiii(a, b, c, d);
  int first = calc(a, c);
  int second = calc(b, d);
  if(first == second)
    cout<<"Tie"<<endl;
  else if(first > second)
    cout<<"Misha"<<endl;
  else
    cout<<"Vasya"<<endl;
}