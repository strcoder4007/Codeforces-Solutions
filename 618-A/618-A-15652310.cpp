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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

int n;
vector<int>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
string st = std::bitset<32>(n).to_string();
int sz=  st.size();
for(int i = sz-1; i+1; i--)
    if(st[i] == '1')
        myvec.pb(32-i);
n = myvec.size();
for(int i = n-1; i+1; i--)
    cout<<myvec[i]<<" ";
cout<<endl;

return 0;}