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

int ary[1000][1000];

bool topleft(int i, int j)
{
  if(ary[i-1][j-1] == 1 && ary[i][j-1] == 1 && ary[i-1][j] == 1)
    return true;
  else
    return false;
}
bool topright(int i, int j)
{
  if(ary[i-1][j+1] == 1 && ary[i-1][j] == 1 && ary[i][j+1] == 1)
    return true;
  else
    return false;
}
bool downleft(int i, int j)
{
  if(ary[i+1][j-1] == 1 && ary[i][j-1] == 1 && ary[i+1][j] == 1)
    return true;
  else
    return false;
}
bool downright(int i, int j)
{
  if(ary[i+1][j+1] == 1 && ary[i+1][j] == 1 && ary[i][j+1] == 1)
    return true;
  else
    return false;
}

 int main (void)
 {
   driii(n, m, k);
   ms0(ary);
   rep(x, k)
   {
     drii(i, j);
     i -= 1;
     j -= 1;
     ary[i][j] = 1;
     if(i == 0 && j == 0)
     {
       if(downright(i, j))
       {
         cout<<x+1<<endl;
         return 0;
       }
     }
     if(i == 0 && j == m-1)
     {
       if(downleft(i, j))
       {
         cout<<x+1<<endl;
         return 0;
       }
     }
     if(i == n-1 && j == m-1)
     {
       if(topleft(i, j))
       {
         cout<<x+1<<endl;
         return 0;
       }
     }
     if(i == n-1 && j == 0)
     {
       if(topright(i, j))
       {
         cout<<x+1<<endl;
         return 0;
       }
     }
     if(i == 0 || j == 0 || i == n-1 || j == m-1)
     {
     if(i == 0)
       if(downleft(i, j) || downright(i, j))
         {
           cout<<x+1<<endl;
           return 0;
         }
     if(j == 0)
       if(topright(i, j) || downright(i, j))
             {
               cout<<x+1<<endl;
               return 0;
             }
     if(i == n-1)
       if(topleft(i, j) || topright(i, j))
         {
           cout<<x+1<<endl;
           return 0;
         }
     if(j == m-1)
       if(downleft(i, j) || topright(i, j))
        {
          cout<<x+1<<endl;
          return 0;
        }
    }
         else
         {
           if(downleft(i, j) || downright(i, j) || topleft(i, j) || topright(i, j))
           {
             cout<<x+1<<endl;
             return 0;
           }
         }

   }
   cout<<0<<endl;
 }