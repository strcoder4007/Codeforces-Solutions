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

int n, m;
vector<int>myvec, newvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
    for(int i = 1; i <= 2*n; i++)
        newvec.pb(i);
    for(int i = 2*n+1; i <= 4*n; i++)
        myvec.pb(i);
    for(int i = 0; i < 2*n; i++)
    {
        if(myvec[i] <= m)
            cout<<myvec[i]<<" ";
        if(newvec[i] <= m)
            cout<<newvec[i]<<" ";
    }
    cout<<endl;


return 0;}