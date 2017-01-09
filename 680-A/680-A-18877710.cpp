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

int found[110], sum;
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 0; i < 5; i++)
{
    int xs; cin>>xs;
    ++found[xs];
    sum += xs;
}
for(int i = 100; i; i--)
{
    if(found[i] >= 3)
        myvec.pb(i*3);
    else if(found[i] == 2)
        myvec.pb(i*2);
}
sort(myvec.begin(), myvec.end(), greater<int>());
if(myvec.size())
    sum -= myvec[0];
cout<<sum<<endl;

return 0;}