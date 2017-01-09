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

int n, flag[10], one;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
    flag[0]=2;
    flag[1]=7;
    flag[2]=2;
    flag[3]=3;
    flag[4]=3;
    flag[5]=4;
    flag[6]=2;
    flag[7]=5;
    flag[8]=1;
    flag[9]=2;
    one = n%10;
    n /= 10;
    cout<<flag[one]*flag[n]<<endl;


  return 0;
}