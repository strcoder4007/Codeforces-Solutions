#include <bits/stdc++.h>
#define ms1(xs) memset((xs), '#', sizeof(xs))
using namespace std;
typedef unsigned long long ll;

int main(void)
{
    //ios_base::sync_with_stdio(0);
    int k;
    cin>>k;
    int ary1[11], ary2[11], ary3[1], ary4[11];
    ms1(ary1);ms1(ary2);ms1(ary3);ms1(ary4);
    if(k == 1)
      {ary1[0] = 'O';k -= 1;}
    if(k == 2)
      {ary2[0] = 'O';ary1[0] = 'O';k -= 2;}
    if(k == 3)
      {ary3[0] = 'O';ary2[0] = 'O';ary1[0] = 'O';k -= 3;}
    if(k == 4)
      {ary4[0] = 'O';ary3[0] = 'O';ary2[0] = 'O';ary1[0] = 'O';k -= 4;}
    if(k > 4)
     {ary1[0] = 'O';ary2[0] = 'O';ary3[0] = 'O';ary4[0] = 'O';k -= 4;}
if(k != 0)
{
    int fill = k/3;
    for(int i = 1; i <= fill; i++)
    {
        ary1[i] = 'O';
        ary2[i] = 'O';
        ary4[i] = 'O';
    }
    k -= fill*3;
    if(k >= 1)
      ary1[fill+1] = 'O';
    if(k >= 2)
        ary2[fill+1] = 'O';
    if(k >= 4)
      ary4[fill+1] = 'O';
}
printf("+------------------------+\n|");
for(int i = 0; i < 11; i++){printf("%c.", ary1[i]);}printf("|D|)\n|");
for(int i = 0; i < 11; i++){printf("%c.", ary2[i]);}printf("|.|\n|");
printf("%c.......................|\n|", ary3[0]);
for(int i = 0; i < 11; i++){printf("%c.", ary4[i]);}printf("|.|)\n");
printf("+------------------------+\n");
}