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

int n, found[150], maxx, minn;
string st;


int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
if(n > 26)
{
    cout<<-1<<endl;
    return 0;
}
for(int i = 0; i < n; i++)
    ++found[st[i]];
for(int i = 97; i < 123; i++)
    if(found[i] > 1)
        maxx += found[i]-1;
cout<<maxx<<endl;

return 0;}