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

long long fst, sec, thr, minn, maxx, num;
int n;
map<long long, bool>mymap;
vector<long long>myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
minn = 9e18;
for(int i = 1; i*i <= n; i++)
    if(n%i == 0)
        myvec.pb(i), myvec.pb(n/i), mymap[i] = true, mymap[n/i] = true;

for(int i = 0; i < myvec.size(); i++)
    for(int j = 0; j < myvec.size(); j++)
        if(n%(myvec[i]*myvec[j]) == 0)
        {
            if(mymap[n/(myvec[i]*myvec[j])])
            {
                num = n/(myvec[i]*myvec[j]);
                fst = (myvec[i]+1)*(myvec[j]+2)*(num+2);
                sec = (myvec[j]+1)*(num+2)*(myvec[i]+2);
                thr = (num+1)*(myvec[i]+2)*(myvec[j]+2);
                maxx = max(maxx, max(fst, max(sec, thr)));
                minn = min(minn, min(fst, min(sec, thr)));
            }
        }
cout<<minn-n<<" "<<maxx-n<<endl;

return 0;}