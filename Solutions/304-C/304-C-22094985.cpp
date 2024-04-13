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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
#define have wghwiejojgoejfoejfast
using namespace std;

int n, found[100010], fst[100010], sec[100010], thr[100010];

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    fst[i] = sec[i] = i;
    thr[i] = (fst[i]+sec[i])%n;
    ++found[thr[i]];
}
for(int i = 0; i < n; i++)
    if(found[i] != 1)
    {
        cout<<-1<<endl;
        return 0;
    }
for(int i = 0; i < n; i++)
    cout<<fst[i]<<" ";
cout<<endl;
for(int i = 0; i < n; i++)
    cout<<sec[i]<<" ";
cout<<endl;
for(int i = 0; i < n; i++)
    cout<<thr[i]<<" ";
cout<<endl;

return 0;}