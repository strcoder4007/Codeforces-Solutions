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

bool found_prime, found_non_prime;
long long n, save;
vector<long long> myvec;


long long isprime(long long num)
{
    long long start = 2;
    while(start*start <= num)
    {
        if(num%start == 0)
            return start;
        ++start;
    }
    return 0;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 2; i*i <= n; i++)
    if(n%i == 0)
        myvec.pb(i), myvec.pb(n/i);
sort(myvec.begin(), myvec.end());

for(long long i = 0; i < myvec.size(); i++)
{
    if(isprime(myvec[i]) == 0)
        found_prime = true;
    else
    {
        found_non_prime = true;
        save = myvec[i];
        break;
    }
}

if(!found_prime && !found_non_prime)
{
    cout<<1<<endl<<0<<endl;
    return 0;
}
if(found_non_prime)
    cout<<1<<endl<<save<<endl;
else
    cout<<2<<endl;


return 0;}