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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

int n, num, ary1[110], ary2[110], path[110][110];


bool pass(int a, int b)
{
    if((ary1[a] > ary1[b] && ary1[a] < ary2[b]) || (ary2[a] > ary1[b] && ary2[a] < ary2[b]))
        return true;
    return false;
}
void floyd_warshall()
{
    for(int i = 1; i < num; i++)
    {
        if (pass(i,num))
            path[i][num] = 1;
        if (pass(num,i))
            path[num][i] = 1;
    }
    for (int i = 1; i <= num; i++)
        for(int j = 1; j <= num; j++)
            if(path[j][i] == 1)
                for(int k = 1; k <= num; k++)
                    if (path[i][k] == 1 && j != k)
                        path[j][k] = 1;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    int type, l, r; cin>>type;
    if(type == 1)
    {
        cin>>l>>r;
        ++num;
        ary1[num] = l, ary2[num] = r;
        floyd_warshall();
    }
    else
    {
        cin>>l>>r;
        if(path[l][r] == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

return 0;}