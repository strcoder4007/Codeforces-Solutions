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
#define MOD 10000007
using namespace std;
int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

    long  long n, m, cnt1=  2, cnt2 = 3, cnt = 0;
    cin>>n>>m;
    cnt1 *= n;
    cnt2 *= m;
    for(int i = 2; i*3 <= cnt1 && i*3 <= cnt2; cnt++, i+=2);
    while(cnt)
    {
        if(cnt1 <= cnt2)
        {
            cnt1 += 2;
            cnt += (cnt1%3 == 0 && cnt1 <= cnt2)-1;
        }
        else
        {
            cnt2 += 3;
            cnt += (cnt2%2 == 0 && cnt2 <= cnt1)-1;
        }
    }
    cout<<max(cnt1, cnt2)<<endl;

return 0;}