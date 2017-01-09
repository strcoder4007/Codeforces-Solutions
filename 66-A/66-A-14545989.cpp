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
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

string s, xbyte, xshort, xint, xlong;

bool check(string a, string b)
{
    if(a == b)
      return false;
    if(a.size() > b.size())
      return true;
    else if(a.size() < b.size())
      return false;
    else
    {
        for(int i = 0; i < a.size(); i++)
        if(a[i] > b[i])
            return true;
         else if(a[i] < b[i])
           return false;
    }
}

int main(){
///freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
xbyte = "127";
xshort = "32767";
xint = "2147483647";
xlong = "9223372036854775807";

if(check(s, xlong))
  cout<<"BigInteger"<<endl;
else if(check(s, xint))
  cout<<"long"<<endl;
else if(check(s, xshort))
  cout<<"int"<<endl;
else if(check(s, xbyte))
  cout<<"short"<<endl;
else
  cout<<"byte"<<endl;

return 0;}