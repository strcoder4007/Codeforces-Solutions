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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, num;
vector<int>myvec;
set<int>myset;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0 ; i < n; i++)
{
    int xs; cin>>xs;
    myset.insert(xs);
}
if(myset.size() <= 2)
    cout<<"YES"<<endl;
else if(myset.size() > 3)
    cout<<"NO"<<endl;
else
{
    for(set<int>::iterator ii = myset.begin(); ii != myset.end(); ii++)
    {
        num = *ii;
        myvec.pb(num);
    }
    if(myvec[1]-myvec[0] == myvec[2]-myvec[1])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

return 0;}