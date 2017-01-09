#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,carry=1,count=0;
    string s;
    cin>>n>>s;
    int l=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1'&&carry==1)
        {
            carry=1;
            count++;
            if(i==n-1) count++;
        }
        else if(s[i]=='0'&&carry)
        {
            count++;
            break;
        }
        else 
        {
            carry=0;
            break;
        }
    }
    cout<<min(count,n)<<endl;
}