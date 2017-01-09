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

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, q, ans, xs, type, junk;

int main(){
    /*
freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);
*/
scanf("%d", &n);
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
    {
        scanf("%d", &xs);
        if(i == j)
            ans ^= xs;
    }
scanf("%d", &q);
while(q--)
{
    scanf("%d", &type);
    if(type == 1 || type == 2)
    {
        scanf("%d", &junk);
        ans ^= 1;
    }
    else
        printf("%d", ans);
}
printf("\n");

return 0;}