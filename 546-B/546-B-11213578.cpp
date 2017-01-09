#include<bits/stdc++.h>
using namespace std;
int main (void)
{
    int n;
    scanf("%d", &n);
    int ary[n];
    int count = 0;
    for(int i = 0; i < n; i++)
      scanf("%d", ary+i);
    sort(ary, ary+n);
    for(int i = 0; i < n-1; i++)
    {
        int init = ary[i];
        //int inc = 1;
        for(int j = i+1; j < n; j++)
        {
            if(init == ary[j])
            {
                count++;
                ary[j] += 1;
                //inc++;
            }
        }
    }
    cout<<count<<endl;
}