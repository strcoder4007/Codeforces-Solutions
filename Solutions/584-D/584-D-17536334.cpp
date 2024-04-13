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


bool ary[40010];
vector<int>myvec;
int ans1, n;

bool is_prime(int num)
{
    bool error = false;
    int xs = sqrt(num);
    for(int i = 0; i < myvec.size(); i++)
    {
        if(myvec[i] > xs)
            break;
        if(num%myvec[i] == 0 || myvec[i]%num == 0)
            error = true;
    }
    if(error)
        return false;
    return true;
}

void esieve(int num)
{
    for(int i = 2; i < num; i++)
        if(ary[i] == false)
        {
            int ii = 2;
            myvec.pb(i);
            while(i*ii <= num)
                ary[i*ii] = true, ++ii;
        }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

esieve(40000);
cin>>n;
if(is_prime(n))
{
    cout<<1<<endl<<n<<endl;
    return 0;
}
for(int i = n; i >= max(n-285, 2); i--)
    if(is_prime(i) && n-i > 1)
    {
        ans1 = i;
        break;
    }
n -= ans1;
if(n == 0)
{
    cout<<1<<endl<<ans1<<endl;
    return 0;
}
if(is_prime(n))
{
    cout<<2<<endl<<ans1<<" "<<n<<endl;
    return 0;
}
for(int i = 0; i < 100; i++)
    for(int j = 0; j < 100; j++)
        if(myvec[i]+myvec[j] == n)
        {
            cout<<3<<endl;
            cout<<ans1<<" "<<myvec[i]<<" "<<myvec[j]<<endl;
            return 0;
        }


return 0;}