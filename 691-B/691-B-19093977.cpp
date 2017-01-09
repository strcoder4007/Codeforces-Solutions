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

string st;
int n;
char ary[] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y', 'o', 'v', 'w', 'x', 'b', 'd', 'p', 'q'};
bool found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 0; i < n; i++)
{
    found = false;
    for(int j = 0; j < 19; j++)
        if(st[i] == ary[j])
            found = true;
    if(!found)
    {
        cout<<"NIE"<<endl;
        return 0;
    }
}
for(int i = 0; i < n/2; i++)
{
    if((st[i] == 'b' && st[n-i-1] == 'd') || (st[i] == 'd' && st[n-i-1] == 'b'))
        continue;
    if((st[i] == 'p' && st[n-i-1] == 'q') || (st[i] == 'q' && st[n-i-1] == 'p'))
        continue;
    if((st[i] != st[n-i-1]) || (st[i] == st[n-i-1] && (st[i] == 'p' || st[i] == 'q' || st[i] == 'b' || st[i] == 'd')))
    {
        cout<<"NIE"<<endl;
        return 0;
    }
}
if(n&1)
{
    if(st[n/2] == 'b' || st[n/2] == 'd' || st[n/2] == 'p' || st[n/2] == 'q')
    {
        cout<<"NIE"<<endl;
        return 0;
    }
}
cout<<"TAK"<<endl;



return 0;}