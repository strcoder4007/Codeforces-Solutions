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

string a, b;
int n;
bool found1, found2;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b;
if(a.size() != b.size())
{
    cout<<"NO"<<endl;
    return 0;
}
n = a.size();
for(int i = 0; i < n; i++)
{
    if(a[i] == '1')
        found1 = true;
    if(b[i] == '1')
        found2 = true;
}
if(found1 == found2)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;


return 0;}