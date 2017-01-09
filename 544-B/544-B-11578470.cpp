#include <bits/stdc++.h>
using namespace std;
char ary[101][101];

int main(void)
 {
   //freopen("F:/in.txt", "r", stdin);
   memset(ary, 'S', sizeof(ary));
   ios_base::sync_with_stdio(0);
   int n,k;
   cin>>n>>k;
   if(n%2 == 0){
     if(k > (n*n)/2)
     {
       cout<<"NO"<<endl;
       return 0;
     }}
   else
   {
    if(k > (n*n)/2+1)
     {
       cout<<"NO"<<endl;
       return 0;
     }
   }
     cout<<"YES"<<endl;
     for(int i = 0; i < n; i++)
       for(int j = 0; j < n; j++)
         if((i+j)%2 == 0 && k != 0)
         {
           ary[i][j] = 'L';
           --k;
         }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
      {
        cout<<ary[i][j];
      }
    cout<<endl;
  }
}