#include <bits/stdc++.h>
using namespace std;
int main(void)
 {
   //freopen("F:/input.txt", "r", stdin);
   int n, m;
   cin>>n>>m;
   if(n < 2 || m < 2){
    cout<<0<<endl;
     return 0;}
   char ary[n][m];
   for(int i = 0; i < n; i++)
       scanf("%s", ary[i]);
   int found[4];
   int ans = 0;
   for(int i = 0;i <= n-2; i++)
   {
     for(int j = 0;j <= m-2; j++)
     {
       //cout<<"level 2"<<endl;
       memset(found, 0, sizeof(found));
       for(int x = i; x < i+2; x++)
         {
           for(int y = j; y < j+2; y++)
           {
             if(ary[x][y] == 'f')
               found[0] += 1;
             else if(ary[x][y] == 'a')
               found[1] += 1;
             else if(ary[x][y] == 'c')
               found[2] += 1;
             else if(ary[x][y] == 'e')
               found[3] += 1;
           }
         }
         //cout<<found[0]<<found[1]<<found[2]<<found[3]<<endl;
         if(found[0] == 1 && found[1] == 1 && found[2] == 1 && found[3] == 1)
           ans++;
     }
   }
   cout<<ans<<endl;
 }