#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <iostream>
#include <iterator>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cstring>
#pragma comment(linker, "/STACK:66777216")
using namespace std;
#define pb push_back
#define ppb pop_back
#define pi 3.1415926535897932384626433832795028841971
#define mp make_pair
#define x first
#define y second
#define pii pair<int,int>
#define pdd pair<double,double>
#define INF 1000000000
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;i--)
#define all(c) (c).begin(), (c).end()
#define SORT(c) sort(all(c))
#define rep(i,n) FOR(i,1,(n))
#define rept(i,n) FOR(i,0,(n)-1)
#define L(s) (int)((s).size())
#define C(a) memset((a),0,sizeof(a))
#define VI vector <int>
#define ll long long

int a,b,c,d,i,j,n,m,k;
int mas[20001];
int main() {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d", &n);
    rept(i, n) scanf("%d", &mas[i]);

    int ans = -2 * INF;
    for (int ver = 3; ver <= n; ++ver) {
        if (n % ver) continue;
        int s = n / ver;
        rept(i, s) {
            int cur = 0;
            for (int j = i; j < n; j += s) {
                cur += mas[j];
            }
            if (cur > ans) ans = cur;
        }
    }

    printf("%d\n", ans);
}