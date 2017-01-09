#include <bits/stdc++.h>
using namespace std;

int done[101], degree[101];

 int main (void)
 {
   //freopen("F:/input.txt", "r", stdin);
   //freopen("F:/output.txt", "w", stdout);
   int n, m;
   cin>>n>>m;
   int a[m][2];
   for(int i=0;i<m;i++)
   {
     cin>>a[i][0]>>a[i][1];
   }
   int totrem=0,ans=0,tot;
   while(totrem<n)
   {
     tot=0;
     fill(degree,degree+n+1,0);
     for(int i=0;i<m;i++)
     {
       if(done[a[i][0]]||done[a[i][1]])
        continue;
       degree[a[i][0]]++;
       degree[a[i][1]]++;
     }
     for(int i=1;i<=n;i++)
     {
       if(degree[i]==1)
       {
         done[i]=1;
         tot++;
       }
     }
     if(tot==0)
     break;
     totrem+=tot;
     ans++;
   }
   cout<<ans<<endl;
 }