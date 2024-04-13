#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n, ans;
   cin>>n;
   if(n%2 != 0){
     ans = ceil(n/2.0);
     cout<<"-"<<ans<<endl;
     return 0;}
   if(n%2 == 0){
     ans = n/2;
     cout<<ans<<endl;
     return 0;}
   if(n == 0){
     cout<<"0"<<endl;
     return 0;}
}