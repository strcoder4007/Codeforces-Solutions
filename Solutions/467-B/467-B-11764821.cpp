#include <bits/stdc++.h>
using namespace std;

inline int bits_count(int v)
{
  v = v-((v>>1)&0x55555555);
  v = (v&0x33333333) + ((v>>2)&0x33333333);
  return ((v+(v>>4)&0xF0F0F0F)*0x1010101)>>24;
}
int a[10001];
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
  int n, m, k;
  cin >> n >> m >> k;
  for (int i = 0; i <= m; ++i)
    cin >> a[i];
  int x = a[m];
  int ans = 0;
  for (int i = 0; i < m; ++i)
    ans += bits_count(a[i] ^ x) <= k;
  cout << ans << endl;
}