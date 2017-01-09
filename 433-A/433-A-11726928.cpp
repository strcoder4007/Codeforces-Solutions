#include <bits/stdc++.h>
#define case(t) int t; cin>>t; while (t-- > 0)
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
int n, a, b;
 int main (void)
 {
   //freopen("/tmp/input.txt", "r", stdin);
   ios_base::sync_with_stdio(false);
   cin>>n;
   for (int i = 1, x; i <= n; ++i)
   {
     cin >> x;
     if (x == 100) ++a;
     else ++b;
   }
   int sum = 100 * a + 200 * b;
   if (sum % 200 != 0) cout << "NO" << endl;
   else
   {
     int half = sum / 2;
     bool ans = false;
     for (int i = 0; i <= b; ++i)
       if (200 * i <= half && half - 200 * i <= a * 100) ans = true;
     if (ans) cout << "YES" << endl;
     else cout << "NO" << endl;
   }
 }