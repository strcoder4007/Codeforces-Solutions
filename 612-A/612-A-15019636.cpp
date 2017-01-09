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

int n, k, a, b, fst, sec;
string s;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>n>>a>>b>>s;
if(a > b)
  swap(a, b);
k = n;
while(k%b != 0 && k > 0)
{
    k -= a;
    ++fst;
}
if(k%b == 0)
  sec = k/b, k = 0;
if(k != 0)
  cout<<-1<<endl;
else
{
    int last = 0;
    cout<<fst+sec<<endl;
    for(int i = 0; i < fst; i++)
    {
        for(int j = last; j < a+last; j++)
            cout<<s[j];
        cout<<endl;
        last += a;
    }
    for(int i = 0; i < sec; i++)
    {
        for(int j = last; j < b+last; j++)
            cout<<s[j];
        cout<<endl;
        last += b;
    }
}



return 0;}