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
#include <limits.h>
#include <stdlib.h>

#define F first
#define endl "\n"
#define S second
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define pi 3.141592653589793
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
using namespace std;
#define int long long

int count(long long num)
{
    int cnt = 0;
    while(num > 0)
    {
        num /= 2;
        ++cnt;
    }
    return cnt;
}
long long integer(string st)
{
    int sz = st.size();
    int multi = 0;
    int num = 0;
    for(int i = sz-1; i+1; i--)
    {
        num+= (st[i]-48)*pow(2, multi);
        ++multi;
    }
    return num;
}

main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);


long long l, r;
cin>>l>>r;
int cnt = 0;
int x = count(l);
int y = count(r);
int xx = x, yy = y;
x -= 2, y -= 1;
int diff = yy-xx;
//cout<<diff<<" "<<xx<<" "<<yy<<endl;
for(int xs = xx; xs <= yy; xs++)
{
    string st = "";
    for(int i = 0; i < xs; i++)
        st += '1';
    long long num = 0;
    for(int i = 1; i < xs; i++)
    {
        st[i] = '0';
        num = integer(st);
        //cout<<num<<endl;
        if(num >= l && num <= r)
            ++cnt;
        st[i] = '1';
    }
}
cout<<cnt<<endl;

}