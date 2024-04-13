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

int n, k, l, c, d, p, nl, np, drink, salt, lime;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  drink = k*l;
  lime = c*d;
  salt = p;
  drink /= nl;
  salt /= np;
  //cout<<drink<<" "<<lime<<" "<<salt<<endl;
  cout<<min(min(lime, salt), drink)/n<<endl;

}