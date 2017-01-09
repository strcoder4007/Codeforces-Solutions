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
#include <climits>
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, m, xx[1010], yy[1010], tots;
char ary[1010][1010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
    {
        cin>>ary[i][j];
        if(ary[i][j] == '*')
            ++xx[i], ++yy[j], ++tots;
    }
if(tots > n+m-1)
{
    cout<<"NO"<<endl;
	return 0;
}
else
{
    for(int i = 1; i <= 1000; i++)
        for(int j = 1; j <=  1000; j++)
        {
            if(ary[i][j] == '.' && xx[i]+yy[j] == tots)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
            if(ary[i][j] == '*' && xx[i]+yy[j] == tots+1)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
}
cout<<"NO"<<endl;

return 0;}