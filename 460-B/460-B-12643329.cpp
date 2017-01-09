#include<iostream>
#include<vector>
using namespace std;
#define ll long long

ll S(ll x)
{
    if (x < 0)return -1;
    ll s = 0;
    while(x)
    {
        s += x%10;
        x /= 10;
    }

    return s;
}

ll poww(ll a, ll b)
{
    ll res = 1;
    for(int i = 1; i<=b; ++i)
        res *= a;

    return res;
}

int main(){
    ll A, B, C;
    cin >> A >> B >> C;
    int cou = 0;
    vector<ll>ans;
    for(ll s = 1; s <= 81; ++s)
    {
        ll x = B*poww(s, A) + C;
        if (S(x) == s && x < 1000000000) 
        {
            ans.push_back(x);
            cou++;
        }
    }

    cout << cou << "\n";
    for(int i = 0; i<cou; ++i)
        cout << ans[i] << " ";

    return 0;
}