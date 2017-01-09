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
#define MP make_pair
#define PB push_back
#define PI 3.141592653589793
typedef unsigned long long LL;

using namespace std;

int n;

int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  cin>>n;
  for (int i = 0; i <= 2 * n; ++i)
  {
      for (int j = 0; j <= 2 * n; ++j)
     {
          int d = n - abs(i - n) - abs(j - n);
          if (d < 0 && j > n) {
                continue;
            }
            if (j != 0) {
              cout<<' ';
            }
            if (d < 0) {
                cout<<' ';
            } else {
                cout<<d;
            }
        }
        cout<<endl;
    }
    return 0;
}