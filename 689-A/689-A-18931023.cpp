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

int n, num, ary[15][15], cnt;
pair<int, int>start;
vector<pair<int, int> > myvec;
bool error;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
num = 1;
for(int i = 0; i <= 10; i++)
    for(int j = 0; j <= 10; j++)
            ary[i][j] = -1;
for(int i = 3; i <= 5; i++)
    for(int j = 3; j <= 5; j++)
        ary[i][j] = num, ++num;
ary[6][4] = 0;
for(int i = 0; i <= 10; i++)
    for(int j = 0; j <= 10; j++)
        if(ary[i][j] == (st[0]-'0'))
            start = mp(i, j);

for(int xs = 1; xs < n; xs++)
{
    num = st[xs]-'0';
    for(int i = 3; i <= 6; i++)
        for(int j = 3; j <= 5; j++)
            if(ary[i][j] == num)
                myvec.pb(mp(i-start.F, j-start.S)), start = mp(i, j);
}

for(int i = 3; i <= 6; i++)
{
    for(int j = 3; j <= 5; j++)
    {
        if(ary[i][j] != -1 && ary[i][j] != st[0]-'0')
        {
            int x = i, y = j;
            bool minus_one = false;
            for(int xs = 0; xs < myvec.size(); xs++)
            {
                x += myvec[xs].F, y += myvec[xs].S;
                if(ary[x][y] == -1)
                    minus_one = true;
            }
            if(minus_one)
                ++cnt;
        }
    }
}
if(cnt != 9)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;


return 0;}