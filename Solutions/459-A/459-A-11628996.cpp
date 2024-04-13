#include <bits/stdc++.h>
using namespace std;
 int main (void)
 {
   ios_base::sync_with_stdio(false);
   int x1, y1, x2, y2;
   cin>>x1>>y1>>x2>>y2;
     if(x1==x2)
     {
         int len=abs(y2-y1);
         cout<<x1+len<<" "<<y1<<" "<<x1+len<<" "<<y2<<endl;
     }
     else if(y1==y2)
     {
         int len=abs(x2-x1);
         cout<<x1<<" "<<y1+len<<" "<<x2<<" "<<y2+len<<endl;
     }
     else if(abs(x1-x2)==abs(y1-y2))
     {
         if(x1<x2)
         {
             cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
         }
         else
         {
             cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2<<endl;
         }
     }
     else
         cout<<"-1\n";
     return 0;
 }