#include <bits/stdc++.h>
using namespace std;
int a,b,ans=0;
int main()
{
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("infinity\n");
        return 0;
    }
    a-=b;
    for(int i=1;i*i<=a;i++)
        if(!(a%i))
    {
        if(i*i==a)
            ans+=(i>b);
        else
            ans+=(i>b)+(a/i>b);
    }
    printf("%d\n",ans);
}