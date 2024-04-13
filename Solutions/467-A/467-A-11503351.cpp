#include <bits/stdc++.h>
#define ms1(xs) memset((xs), '#', sizeof(xs))
using namespace std;
typedef unsigned long long ll;

int main(void)
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    int count = 0;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(b-a >= 2)
          count++;
    }
    cout<<count<<endl;
}