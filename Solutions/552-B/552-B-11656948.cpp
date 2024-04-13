#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
	ll n;
  cin >> n;
	ll o = 9, t = 1;
	ll ans = 0;
	while (1)
  {
		if (o <= n)
    {
			ans += (t*o);
			t++;
			n -= o;
			o *= 10;
		}
    else
    {
			ans += (n*t);
			break;
		}
	}
	cout << ans << endl;
}