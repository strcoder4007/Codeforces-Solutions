#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,i;
    cin>>n;
    char s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(i<n/2)
        {
            sum1=sum1+(s[i]-'0');
        }
        else
        {
            sum2=sum2+(s[i]-'0');
        }
        if((s[i]-'0')!=4 && (s[i]-'0')!=7)
        {
            cout<<"NO";
            return 0;
        }
    }
    if(sum1==sum2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}