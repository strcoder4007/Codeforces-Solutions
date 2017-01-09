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

int n;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);

cin>>n;
if(n < 4)
{
  cout<<"NO"<<endl;
  return 0;
}
cout<<"YES"<<endl;
if(!(n&1))
{
  cout<<"1 * 2 = 2"<<endl;
  cout<<"3 *4  = 12"<<endl;
  cout<<"2 * 12 = 24"<<endl;
  for(int i = 5; i <= n; i+=2)
  {
    cout<<i+1<<" - "<<i<<" = "<<1<<endl;
    cout<<"1 * 24 = 24"<<endl;
  }
}
else
{
  cout<<"2 - 1 = 1"<<endl;
  cout<<"1 + 3 = 4"<<endl;
  cout<<"4 * 5 = 20"<<endl;
  cout<<"4 + 20 = 24"<<endl;
  for(int i = 6; i <= n; i+=2)
  {
    cout<<i+1<<" - "<<i<<" = "<<1<<endl;
    cout<<"1 *24 = 24"<<endl;
  }
}


return 0;}