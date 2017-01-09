#include <bits/stdc++.h>
using namespace std;
int res[4] = {4, 0, 0, 0};
int main()
{
    string s;
        cin >> s;
    int units = s[(int) s.length() - 1] - '0';
    int tens = 0;
    if ((int) s.length() > 1)
        tens = s[(int) s.length() - 2] - '0';
    int dude = 10 * tens  + units;
    cout << res[dude % 4] << endl;
    return 0;
}