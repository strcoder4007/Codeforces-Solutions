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
using namespace std;

int zero, one, diff, limit, left1;
vector<int> myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>zero>>one;
if((zero-1)<=one && one <= 2 * (zero + 1))
{
  if(zero > one)
  {
    cout<<"0";
    for(int i = 0; i < one; i++)
      cout<<"10";
    cout<<endl;
  }
  else if(zero == one)
    for(int i = 0; i < one; i++)
      cout<<"10";
  else
  {
    for(int i = 0; i < zero; i++)
      myvec.pb(1), myvec.pb(0);
    diff = one-zero;
    limit = min(diff, zero);
    left1 = diff-zero;
    int i = 0;
    while(limit--)
      myvec[i] = 11, i += 2;
    for(int i = 0; i < myvec.size(); i++)
      cout<<myvec[i];
    for(int i = 0; i < left1; i++)
      cout<<'1';
    cout<<endl;
  }
}
else
  cout<<-1<<endl;

return 0;}