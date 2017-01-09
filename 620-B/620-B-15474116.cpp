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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

long long a, b, num, xs, sum;
int found[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b;
for(int i = a; i <= b; i++)
{
    num = i;
    while(num > 0)
    {
        xs = num%10;
        sum += found[xs];
        num /= 10;
    }
}
cout<<sum<<endl;

return 0;}