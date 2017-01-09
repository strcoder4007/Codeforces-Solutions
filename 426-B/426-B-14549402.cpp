#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

int n, m, ary[110][110], flag;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 0; i < n; i++)
  for(int j = 0; j < m; j++)
      cin>>ary[i][j];
if(n&1)
{
    cout<<n<<endl;
    return 0;
}
while(n != 1)
{
    for(int i = 0;  i < n/2; i++)
    for(int j = 0; j < m; j++)
            if(ary[i][j] != ary[n-i-1][j])
            flag = 1;
    if(flag == 1)
    {
        cout<<n<<endl;
        return 0;
    }
    n >>= 1;
    if(n&1)
    {
        cout<<n<<endl;
        return 0;
    }
}
cout<<n<<endl;

return 0;}