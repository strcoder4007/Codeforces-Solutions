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

int n, cnt, col[110], row[110];
char ary[110][110];
bool found;

void __col()
{
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(ary[j][i] == '.')
            {
                cout<<j<<" "<<i<<endl;
                break;
            }
}
void __row()
{
    for(int j = 1; j <= n; j++)
        for(int i = 1; i <= n; i++)
            if(ary[j][i] == '.')
            {
                cout<<j<<" "<<i<<endl;
                break;
            }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
    {
        cin>>ary[i][j];
        if(ary[i][j] == 'E')
            ++row[i], ++col[j];
    }

for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
        if(row[i] == n && col[j] == n)
        {
            cout<<-1<<endl;
            return 0;
        }

for(int j = 1; j <= n; j++)
    if(row[j] == n)
    {
        __col();
        found = true;
        break;
    }
if(!found)
    __row();

return 0;}