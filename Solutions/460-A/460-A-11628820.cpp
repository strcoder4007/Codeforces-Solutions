#include <bits/stdc++.h>
using namespace std;

 int main (void)
 {
   ios_base::sync_with_stdio(false);
   int n, m;
   cin>>n>>m;
   int buff = 0;
    buff = n + n/(m - 1);
    if (n%(m - 1) == 0)
        --buff;
   cout<<buff<<endl;
 }