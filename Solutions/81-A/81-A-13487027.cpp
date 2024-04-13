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
#define LL long long
using namespace std;

string s;
stack<char>mystack;
vector<char>myvec;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>s;
for(int i = 0; i < s.size(); i++)
{
  if(mystack.size() == 0 || mystack.top() != s[i])
    mystack.push(s[i]);
  else
    mystack.pop();
}
while(mystack.size())
{
  myvec.pb(mystack.top());
  mystack.pop();
}
for(int i = myvec.size()-1; i >= 0; --i)
  cout<<myvec[i];
cout<<endl;

return 0;}