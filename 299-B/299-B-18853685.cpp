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
#define MOD 1000000009
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, k, save, cnt;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k>>st;
for(int i = 0; i < n; i++)
{
    save = i, cnt = 0;
    while(st[save] == '#')
        ++save, ++cnt;
    if(cnt >= k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(cnt)
        i += cnt-1;
}
cout<<"YES"<<endl;

return 0;}