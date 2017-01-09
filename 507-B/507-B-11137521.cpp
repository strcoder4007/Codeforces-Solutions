#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, y, x1, y1;
    while (cin >> n >> x >> y >> x1 >> y1)
    {
        double dis = sqrt(double((x - x1)*(x - x1) + (y - y1)*(y - y1))) ;
        long long ans = 0;
        double total = 0;
        if (dis == 0)
        {
            cout << "0" << endl;
            continue;
        }
        while (total < dis)
        {
            total += 2*n;
            ans++;
        }
        if (ans == 0)
            cout << "1" << endl;
        else
            cout << ans  << endl;
    }
    return 0;
}