#include <bits/stdc++.h>
using namespace std;

map<int, int> m;
int n, a, b;
int ar[1000010];
int r[201000];

int main()
{
    cin >> n;
    for(int i = 0; i < n; ++i)
  {
        cin>>a>>b;
        m[a] = b;
        ++ar[a];
        --ar[b];
    }
    int start;
    for(int i = 1;i < 1000010;++i)
  if(ar[i] == 1)
  {
    start = i;
    break;
  }
    int last;
    r[1] = m[0];
    for(int i = 3;i < n;i += 2)
        r[i] = m[r[i - 2]];
    r[0] = start;
    for(int i = 2;i < n;i += 2)
        r[i] = m[r[i - 2]];
    for(int i = 0;i < n;++i)
    cout << r[i] << " ";
}