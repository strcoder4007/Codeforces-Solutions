#include <bits/stdc++.h>
using namespace std;
int main(void)
 {
   //freopen("F:/in.txt", "r", stdin);
   ios_base::sync_with_stdio(0);
   int n, m, a, b;
   cin>>n>>m>>a>>b;
   int count1 = (n/m+1)*b;
   int count2 = (n/m*b)+((n%m)*a);
   int count3 = n*a;
   int maxx = min(count3, min(count1, count2));
   cout<<maxx<<endl;
 }