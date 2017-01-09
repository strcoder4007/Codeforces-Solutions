#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x1 = 1e9, x2 = -1e9;
    int y1 = 1e9, y2 = -1e9;
    for (int i = 1; i <= n; ++i) {
        int x, y;
        cin >> x >> y;
        x1 = min(x1, x);
        x2 = max(x2, x);
        y1 = min(y1, y);
        y2 = max(y2, y);
    }
    int a = max(x2 - x1, y2 - y1);
    cout << 1LL * a * a;
}