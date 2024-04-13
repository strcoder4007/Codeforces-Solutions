#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> S;
    int rem;
    int a,m;
    cin>>a>>m;

    bool ans=false;
    int prev=0;
    int curr;

    while(1)
    {
        if(a%m==0)
        {
            ans=true;
            break;
        }

        rem=a%m;
        a+=rem;
        S.insert(rem);
        curr=S.size();

        if(prev==curr)
            break;

        prev=curr;
    }


    if(ans)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}