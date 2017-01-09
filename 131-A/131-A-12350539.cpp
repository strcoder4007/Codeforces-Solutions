using namespace std;
#include<iostream>
#include<string.h>
int main()
{
    int i,j,k;
    char x[101];
    cin>>x;
   // if(x[0]>=97 && x[0]<=122)
     //   x[0] = x[0]-32;
    for(i=1;i<strlen(x);i++)
    {
        if(x[i]>=65 && x[i]<=90)
        continue;
        else
            break;
    }
    //cout<<i;
    if(i == strlen(x))
    {
        for(j=0;j<strlen(x);j++)
        {
    
    if(x[j]>=97 && x[j]<=122)
        x[j] = x[j]-32;
    else 
    {//(x[j]>=65 && x[j]<=90)
            x[j] = x[j]+32;
        }}
    }
    cout<<x<<endl;

    return 0;
}