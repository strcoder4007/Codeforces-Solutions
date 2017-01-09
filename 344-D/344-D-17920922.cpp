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
int n, a, b;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 0; i < n ;i++)
    if(i&1)
    {
        if(st[i] == '-')
            ++a;
        else
            ++b;
    }
    else
    {
        if(st[i] == '-')
            ++b;
        else
            ++a;
    }
if(a == b)
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;


return 0;}