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

string s;
int sz;
char found[12] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

getline(cin, s);
sz = s.size()-2;
while(s[sz] == ' ')
  --sz;
for(int i = 0; i < 12; i++)
  if(s[sz] == found[i])
  {
    cout<<"YES"<<endl;
    return 0;
  }
cout<<"NO"<<endl;

return 0;}