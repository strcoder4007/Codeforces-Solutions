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

long long n, start;
int visited[100010], ary[100010];
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
for(int i = 0; i < n; i++)
    cin>>ary[i];

while(1)
{
    int xs = ary[start];
    if(st[start] == '>')
    {
        start += xs;

        if(start >= n || start < 0)
        {
            cout<<"FINITE"<<endl;
            return 0;
        }
        if(visited[start])
        {
            cout<<"INFINITE"<<endl;
            return 0;
        }
    }
    else if(st[start] == '<')
    {
        start -= xs;
        if(start < 0 || start >= n)
        {
            cout<<"FINITE"<<endl;
            return 0;
        }
        if(visited[start])
        {
            cout<<"INFINITE"<<endl;
            return 0;
        }
    }
    visited[start] = 1;
}



return 0;}