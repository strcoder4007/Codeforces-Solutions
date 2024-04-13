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

unsigned long long n, sum, maxx;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i <= 1000; i++)
    for(int j = 0; j <= 1000; j++)
    {
        sum = i*1234567+j*123456;
        if((n-sum)%1234 == 0 && n >= sum)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
cout<<"NO"<<endl;

return 0;}