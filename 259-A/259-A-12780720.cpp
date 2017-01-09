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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
typedef long long LL;

using namespace std;


int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

for(int j = 0; j < 8; j++)
{
  string s; cin>>s;
  for(int i = 1; i < 8; i++)
  {
    if(s[i] == s[i-1])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
}
cout<<"YES"<<endl;
return 0;}