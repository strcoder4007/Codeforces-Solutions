#include <bits/stdc++.h>
using namespace std;
int ary1[100010],ary2[100010];
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    int n, k,s1, s2;
    cin>>n>>k;
    int sum = n-1;
    for(int i = 1; i <= k; i++)
    {
    int m;
        cin>>m;
        sum += m-1;
        for(int j = 1; j <= m; j++)
        {
            cin>>s1;
            if(j != 1)
            {
                ary1[s2]=s1;
                ary2[s1]=s2;
            }
            s2=s1;
        }
    }
    int i=1;
    if(ary2[1]==0)
      while(ary1[i]==(i+1))
          sum -= 2,i++;
    cout<<sum<<endl;
}