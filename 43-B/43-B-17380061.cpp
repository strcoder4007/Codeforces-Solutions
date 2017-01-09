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
#define y1 zjdfshnvoavaofobiopj
using namespace std;

int found[10000];
string st, ts;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

getline(cin,st);
getline(cin,ts);
for(int i = 0; i < st.size(); i++)
    found[st[i]]++;
for(int i = 0; i < ts.size(); i++)
    found[ts[i]]--;
for(int i = 0; i < 300; i++)
    if( found[i] < 0 && i != ' ')
    {
        cout<<"NO"<<endl;
        return 0;
    }
cout<<"YES"<<endl;

return 0;}