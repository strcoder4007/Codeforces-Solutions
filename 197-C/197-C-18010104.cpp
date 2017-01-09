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

string st, ans;
char maxx;
int n;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
ans = st[0];
maxx = st[0];
for(int i = 1; i < n; i++)
{
    //cout<<i<<" "<<ans<<endl;
    if(st[i] > maxx)
        ans = st[i], maxx = st[i];
    else if(st[i] > ans[ans.size()-1])
    {
        int xs = ans.size()-1;
        while(ans[xs] < st[i] && xs)
        {
            ans.erase(xs, 1), --xs;
            //cout<<"   "<<ans<<endl;
        }
        ans += st[i];
    }
    else if(st[i] <= ans[ans.size()-1])
        ans += st[i];
    //cout<<i<<" "<<ans<<endl;
}
cout<<ans<<endl;

return 0;}