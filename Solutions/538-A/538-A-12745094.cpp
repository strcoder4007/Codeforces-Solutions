#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;

string s, t;
int sz, l , r;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin >> s;
  sz = s.size();
  t = "CODEFORCES";
  while (l < min(10, sz) && s[l] == t[l]) ++l;
  while (r < min(10, sz) && s[sz - r - 1] == t[10 - r - 1]) ++r;
  cout << (l + r >= 10 ? "YES" : "NO") << '\n';

  return 0;
}