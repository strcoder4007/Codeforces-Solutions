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

int n, a, b, ary[110][110], num;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);


cin>>n>>a>>b;
if(n > a*b)
{
    cout<<-1<<endl;
    return 0;
}
num = 1;
for(int i = 1; i <= a; i++)
{
    if(b&1 || i&1)
    {
        for(int j = 1; j <= b; j++)
            ary[i][j] = num, ++num;
    }
    else
    {
        for(int j = 1; j <= b; j+=2)
        {
            ary[i][j+1] = num, ++num;
            ary[i][j] = num, ++num;
        }
    }
}
for(int i = 1; i <= a; i++)
{
    for(int j = 1; j <= b; j++)
        if(ary[i][j] > n)
            cout<<0<<" ";
        else
            cout<<ary[i][j]<<" ";
    cout<<endl;
}

return 0;}