#include <bits/stdc++.h>
using namespace std;

int done1[101], done2[101];

int main()
{
   int n, m;
   scanf("%d", &n);
   int ary1[n];
   for(int i = 0; i < n; i++)
     scanf("%d", ary1+i);
     scanf("%d", &m);
   int ary2[m];
   for(int i = 0; i < m; i++)
     scanf("%d", ary2+i);
   sort(ary1, ary1+n);
   sort(ary2, ary2+m);
   int count = 0;
   for(int i = 0; i < n; i++)
   {
     for(int j = 0; j < m; j++)
     {
       if(done1[i] == 0 && done2[j] == 0){
       if(ary1[i] == ary2[j] || abs(ary1[i]-ary2[j]) == 1)
       {
         done1[i] = 1;
         done2[j] = 2;
         count++;
       }}
     }
   }
   printf("%d\n", count);
}