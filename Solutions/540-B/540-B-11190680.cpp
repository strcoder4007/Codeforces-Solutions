#include <cstdio>
#include <iostream>
#include <algorithm>
#define INF 9999
using namespace std;
int main()
{
    int n,k,p,x,y;

    scanf("%d %d %d %d %d",&n,&k,&p,&x,&y);
    int arr[1001];
    int i;
    for(i=0;i<1001;i++)
        arr[i]=INF;

    int count=0,sum=0;
    
    for(i=0;i<k;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(arr[i]<y)
            count++;
    }
    int flag=0;
    int res[1001]={0};

    if(x-sum < n-k || x < sum)
        printf("-1\n");
    else if(count > ((n-1)/2))
        printf("-1\n");
    else
    {
        for(i=k;i<n;i++)
        {
            arr[i]=1;
            res[i-k]=1;
            sum++;
        }
        sort(arr,arr+n);
        /*for(i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }*/
            //printf("sum=%d ",sum);
                i=0;
        while(arr[((n+1)/2)-1] < y)
        {
            sum=sum-1+y;
            if( sum <= x)
            {
                arr[i]=y;
                res[i]=y;
                i++;
                sort(arr,arr+n);
            }
            else{
                flag=1;
                break;
            }

        }

        if(flag==1)
            printf("-1\n");
        else
        {
            for(i=0;i<n-k;i++)
            {
                printf("%d ",res[i]);
            }
            printf("\n");
        }
            
    }
    return 0;
}