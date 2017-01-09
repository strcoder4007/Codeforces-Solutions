#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define mp make_pair
#define pb push_back
typedef long long ll;
int main()
{
  //freopen("input.txt", "r", stdin);
  ios_base::sync_with_stdio(false);
    int n, i, tmp, sum = 0, tmp2;
    cin >> n;
    int arr[4] = {0, 0, 0, 0};
    for (i = 0; i < n; i++) {
        cin >> tmp;
        tmp -= 1;
        arr[tmp] += 1;
    }
    sum += arr[3];
    sum += arr[1] / 2;
    tmp2 = min(arr[0], arr[2]);
    sum += tmp2;
    arr[0] -= tmp2, arr[2] -= tmp2;
    sum += arr[2];
    if (arr[0] > 0 && arr[1] % 2 != 0) {
        arr[0] -= 2;
        sum += arr[1] % 2;
    } else {
        sum += arr[1] % 2;
    }
    if (arr[0] > 0) {
        sum += ceil(arr[0] / 4.0);
    }
    cout << sum<<endl;
}