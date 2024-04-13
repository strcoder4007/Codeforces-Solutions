#include <bits/stdc++.h>
#define LL long long
#define maxn 200005
using namespace std;
char  str1[maxn];
char  str2[maxn];
int dp[30][30];
int hs[30];
int main()
{
   //freopen("F:/in.txt", "r", stdin);
   int n ;
   scanf("%d",&n);
   scanf("%s %s",&str1[1],&str2[1]);
   int sum = 0 ;
   for(int i = 1; i <= n; i ++)
   {
     if(str1[i] != str2[i])
     {
        dp[str1[i] - 'a'][str2[i]-'a'] = i ;
        sum ++ ;
        hs[str1[i] - 'a'] = i ;
     }
   }
   for(int i = 0;i < 26 ;i ++)
   {
     for(int j = 0 ;j < 26; j ++)
     {
       if(dp[i][j] != 0 && dp[j][i] != 0 )
       {
          printf("%d\n%d %d\n",sum-2,dp[i][j],dp[j][i]);
          return 0 ;
       }
     }
   }
   for(int i = 0 ;i < 26;i ++)
       for(int j = 0 ;j < 26;j ++)
       {
          if(dp[i][j] != 0 && hs[j] != 0 )
          {
           printf("%d\n%d %d\n",sum-1,dp[i][j],hs[j]);
           return 0 ;
          }
       }
printf("%d\n-1 -1\n",sum);
return 0;
}