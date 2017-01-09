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

int n, found[15], res;
vector<int>myvec;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 0; i < n; i++)
    ++found[st[i]-'0'];
--found[1], --found[6], --found[8], --found[9];
myvec.pb(1), myvec.pb(6), myvec.pb(8), myvec.pb(9);

for(int i = 0; i <= 9; i++)
    for(int j = 0; j < found[i]; j++)
        myvec.pb(i);

do
{
    res = 0;
    for(int i = 0; i < myvec.size(); i++)
        res = (res*10+myvec[i])%7;
    if(res == 0)
    {
        for(int i = 0; i < myvec.size(); i++)
            cout<<myvec[i];
        cout<<endl;
        return 0;
    }
} while(next_permutation(myvec.begin(), myvec.begin()+4));

return 0;}