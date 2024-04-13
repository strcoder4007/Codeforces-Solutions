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

int dx[9] = {-1, -1, -1, 0, 1, 0, 1, 1, 0};
int dy[9] = {0, 1, -1, 1, 0, -1, 1, -1, 0};
string st;
int hash[11][11], cnt;
bool found[11][11][110];

bool pass(int a,int b,int c)
{
    if (a < 1||a > 8||b < 1||b > 8)
        return 0;
    if (a-c<0)
        return true;
    if (hash[a-c][b])
        return false;
    if (hash[a-c+1][b])
        return false;
    return true;
}


int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);


for(int i = 1; i <= 8; i++)
    for(int j = 1; j <= 8; j++)
    {
        char xs; cin>>xs;
        if(xs == 'S')
            hash[i][j] = 1;
    }

found[8][1][0]=1;
for(int t = 0; t <= 50; t++)
    for(int i = 1; i <= 8; i++)
        for(int j = 1; j <= 8; j++)
        {
            if(found[i][j][t] == 0)
                continue;
            if (i == 1 && j == 8)
                cnt=1;
            for(int xs = 0; xs < 9; xs++)
                if(pass(i+dx[xs], j+dy[xs], t+1))
                    found[i+dx[xs]][j+dy[xs]][t+1] = 1;
        }

if(cnt)
    cout<<"WIN"<<endl;
else
    cout<<"LOSE"<<endl;


return 0;}