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

string st1, st2;
int n, cnt;

bool test1(int sz, string st)
{
    for(int i = 0; i < st.size(); i++)
        if(st[i] != st[i%sz])
            return false;
    return true;
}

bool test2(int sz)
{
    for(int i = 0; i < sz; i++)
        if(st1[i] != st2[i])
            return false;
    return true;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st1>>st2;
for(int i = 1; i <= 100000; i++)
    if(st1.size()%i == 0 && st2.size()%i == 0)
        if(test1(i, st1) && test1(i, st2) && test2(i))
            ++cnt;
cout<<cnt<<endl;


return 0;}