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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

string s, t, st1, st2;
int xs, ys;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

getline(cin, s);
getline(cin, t);
while(s[xs] == '0')
    ++xs;
while(t[ys] == '0')
    ++ys;
for(int i = xs; i < s.size(); i++)
    st1 += s[i];
for(int i = ys; i < t.size(); i++)
    st2 += t[i];
if(st1.size() > st2.size())
    cout<<">"<<endl;
else if(st1.size() < st2.size())
    cout<<"<"<<endl;
else
{
    if(st1 > st2)
        cout<<">"<<endl;
    else if(st1 < st2)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
}

return 0;}