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
#include <list>
#include <ctime>
#include <memory.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
typedef unsigned long long LL;

using namespace std;

int n;
string num, s = "";
vector<int> myvec;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  cin>>num;
  for(int i = 0; i< n; i++)
    if(num[i] != '0' && num[i] != '1')
      myvec.pb(int(num[i])-48);
  for(int i = 0; i < myvec.size(); i++)
  {
    if(myvec[i] == 2)
      s += "2";
    else if(myvec[i] == 3)
      s += "3";
      else if(myvec[i] == 4)
        s += "322";
        else if(myvec[i] == 5)
          s += "5";
          else if(myvec[i] == 6)
            s += "53";
            else if(myvec[i] == 7)
              s += "7";
              else if(myvec[i] == 8)
                s += "7222";
                else if(myvec[i] == 9)
                  s += "7332";
  }
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());
  cout<<s<<endl;
}