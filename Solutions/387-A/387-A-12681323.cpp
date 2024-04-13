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

int bighr, bigmin, hr, minn, hours, minutes;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  scanf("%d:%d", &bighr, &bigmin);
  scanf("%d:%d", &hr, &minn);
  if(bigmin >= minn)
    minutes = bigmin - minn;
  else
  {
    if(bighr == 0)
      bighr = 23;
    else
      --bighr;
    minutes = 60-(minn - bigmin);
  }
  if(bighr >= hr)
    hours = bighr - hr;
  else
    hours = 24-(hr - bighr);
  if(minutes < 10 && hours < 10)
    printf("0%d:0%d\n", hours, minutes);
  else if(minutes < 10)
    printf("%d:0%d\n", hours, minutes);
  else if(hours < 10)
    printf("0%d:%d\n", hours, minutes);
  else
    printf("%d:%d\n", hours, minutes);

  return 0;
}