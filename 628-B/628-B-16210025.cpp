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


string st;
long long n, num, cnt, multi;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = n-1; i >= 0; i--)
{
    if(i > 0)
    {
        num = (st[i]-48)+ (10*(st[i-1]-48));
        if(num%4 == 0)
        {
            cnt += i;
            if((st[i]-48)%4 == 0)
                ++cnt;
        }
        else if((st[i]-48)%4 == 0)
            ++cnt;
    }
    else
    {
        num = st[i]-48;
        if(num%4 == 0)
            cnt += 1;
    }
}
cout<<cnt<<endl;
return 0;}