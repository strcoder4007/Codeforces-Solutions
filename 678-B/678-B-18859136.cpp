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
#define MOD 1000000009
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long n, k, cnt;

int shame_on_me(int year)
{
    if (year%4 == 0) {
        if (year%100 == 0) {
            if (year%400 == 0) {
                return 1;
            }
            else {
return 0;
            }
        }
        else {
return 1;
        }
    }
    else {return 0;
    }
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
k = n;
while(1)
{
    ++n;
    if(shame_on_me(n))
        cnt += 2;
    else
        ++cnt;
    if(cnt%7 == 0 && cnt != 0 && shame_on_me(k) == shame_on_me(n))
    {
        cout<<n<<endl;
        return 0;
    }
}

return 0;}