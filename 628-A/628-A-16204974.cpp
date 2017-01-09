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
#include <stdlib.h>
#include <climits>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;


int n, b, p, ans, sum,rounds;

int count(int x)
{
    int counter = 0;
    while(x >1)
        x /= 2, ++counter;
    return counter;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>b>>p;
sum = n;
while(1)
{
    rounds = count(sum);
    if(rounds == 0)
        break;
    sum = rounds+(sum-2*rounds);
    ans += 2*b*rounds+rounds;
}
cout<<ans<<" "<<p*n<<endl;

return 0;}