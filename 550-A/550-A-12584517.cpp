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
typedef long long LL;

using namespace std;

string s;

bool check(char a, char b){
    int pos1 = -1, pos2 = -1;
    for (int i = 0; i < (int)s.size() - 1; i++)
        if (s[i] == a && s[i + 1] == b){
            pos1 = i + 1;
            break;
        }
    for (int i = (int)s.size() - 1; i >= 1; i--)
        if (s[i] == a && s[i - 1] == b){
            pos2 = i - 1;
            break;
        }
    if (pos1 != -1 && pos2 != -1 && pos1 < pos2)
        return true;
    return false;

}


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>s;
  if(check('A', 'B') || check('B', 'A'))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  return 0;
}