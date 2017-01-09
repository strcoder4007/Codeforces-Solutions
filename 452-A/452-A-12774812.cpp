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
#include <ctime>

#define y0 sdkfaslhagaklsldk
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define tm sdfjahlfasfh
#define lr asgasgash

#define eps 1e-9
#define PI 3.141592653589793
#define bs 1000000000
#define bsize 512
#define MAG 40

using namespace std;

string ary[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
int found[8];
int n;
string s;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);


cin>>n>>s;
for(int i = 0; i < 8; i++)
{
  if(ary[i].size() == n)
  {
    for(int j = 0; j < n; j++)
    {
      if(s[j] != '.' && s[j] != ary[i][j])
      {
        found[i] = 1;
        break;
      }
    }
  }
  else
    found[i] = 1;
}
for(int i = 0; i < 8; i++)
{
  if(found[i] == 0)
    cout<<ary[i]<<endl;
}

return 0;
}